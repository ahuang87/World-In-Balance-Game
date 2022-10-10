#include "mbed.h"           //Mbed HeaderFile
#include <ctime>            //SRAND Random Seed Generator. 
#include "MMA8452.h"        //Accelerometer. 
#include "Speaker.h"        //Spekaer
#include "ScreenObject.h"
#include "AbstractAsteroid.h" 
#include "SpaceShipEarth.h"
#include "ConcreteAsteroid1.h"
#include "ConcreteAsteroid2.h"
#include "ConcreteAsteroid3.h"
#include "ConcreteAsteroid4.h"
#include "Sprites.h"

Serial pc(USBTX,USBRX);         // tx, rx
Speaker mySpeaker(p21);         //Speaker pin21
extern "C" void mbed_reset();   //used for mbed reset, to keep game playing. 


int main() {
    
    bool gameover = false;   //Conditional to end game.
    bool gamewon = false;    //Conditional to end game.
    
    
    uLCD_4DGL uLCD(p28, p27, p29);  //uLCD Declarations. 
    uLCD.baudrate(300000);
    wait(0.2);
    srand(time(0));                 // do this srand call here ONLY... no where else in the code!
    
    //Object Declarations: 
    ScreenObject * ActiveAsteroids[NUM_ASTEROIDS];
    SpaceShipEarth ship;
    
    //Title Page: loading visual sprites:
    uLCD.color(WHITE);
    uLCD.printf("     World In\n");                     //Displays Game Text
    uLCD.printf("   The Balance \n");                   //Displays Game Text

    uLCD.BLIT(17, 30, ASTEROID_WIDTH, ASTEROID_HEIGHT, asteroid_sprite_1);  //Displays Asteroid Sprite
    uLCD.BLIT(40, 40, ASTEROID_WIDTH, ASTEROID_HEIGHT, asteroid_sprite_2);  //Displays Asteroid Sprite
    uLCD.BLIT(65, 32, ASTEROID_WIDTH, ASTEROID_HEIGHT, asteroid_sprite_3);  //Displays Asteroid Sprite
    uLCD.BLIT(90, 35, ASTEROID_WIDTH, ASTEROID_HEIGHT, asteroid_sprite_4);  //Displays Asteroid Sprite
    uLCD.BLIT(55, 60, EARTH_HEIGHT, EARTH_WIDTH, explosion);                //Displays Explosion Sprite
    uLCD.BLIT(55, 80, EARTH_HEIGHT, EARTH_WIDTH, spaceship);                //Displays Spaceship Sprite
    uLCD.printf("\n");                                                      // Space Text
    uLCD.printf("\n");
    uLCD.printf("\n");
    uLCD.printf("\n");
    uLCD.printf("\n");
    uLCD.printf("\n");
    uLCD.printf("\n");
    uLCD.printf("\n");
    uLCD.printf("\n");
    uLCD.printf("\n");
    uLCD.printf("Dodge Asteroids!\n");
    uLCD.printf("\n");
    wait(0.5);
    uLCD.color(RED);
    uLCD.printf("      3");                             //Start Game in 3 Seconds Countdown.
    wait(1);
    uLCD.printf(" 2");
    wait(1);
    uLCD.printf(" 1");
    wait(1);
    uLCD.cls();                                         //End of Start Screen, clears screen. 
    
    for (int j = 0; j < NUM_ASTEROIDS; j++) {   //Loops through 4 times and assigns random concreteasteroid. 
        int asteroidNum = rand() % 4 + 1;        //random number 1-4
        switch (asteroidNum) {
            case 1:
                ActiveAsteroids[j] = new ConcreteAsteroid1;
                break;
            case 2:
                ActiveAsteroids[j] = new ConcreteAsteroid2;
                break;
            case 3:
                ActiveAsteroids[j] = new ConcreteAsteroid3;
                break;
            case 4:
                ActiveAsteroids[j] = new ConcreteAsteroid4;
                break;
        }
    }
    double x = 0.0, y = 0.0, z = 0.0;               //Parameters for the accelerometer. 
    double factor = 50.0;                           //used for the sprite spaceship
    int offsetx = 63;                               //Used to offsetx of spaceship on lcd.
    int offsety = 63;                               //Used to offsetx of spaceship on lcd.
    
    MMA8452 acc(p9, p10, 40000);
    acc.setBitDepth(MMA8452::BIT_DEPTH_12);             //Accerolometer default:
    acc.setDynamicRange(MMA8452::DYNAMIC_RANGE_4G);
    acc.setDataRate(MMA8452::RATE_100);
    
    time_t startTime;                                   //Start time for timerbar
    startTime = time(0);
    time_t timeElapsed = time(0)-startTime;             //Elpased time for timerbar
    
    uLCD.filled_rectangle(0, 0, 127, 2, I);             //Timerbar delcaration. 
    
    while (gameover != true ) 
        {
            if (timeElapsed >= 5) {  //If 30 seconds is up then the game is over and player has won. 
                gamewon = true;
                gameover = true;
            } 
        uLCD.filled_rectangle(128-(128*timeElapsed)/5, 0, 128, 2, _);     //Timerbar on top of lcd screen. 
        
        timeElapsed = (time(0)-startTime);              //used for timerbar
        
        ship.update();                                  //update spaceship on lcd. 
        for (int i = 0; i < NUM_ASTEROIDS; i++) {       //update activeasteroids on lcd.
            ActiveAsteroids[i]->update();
        }
        
        
        if (!acc.isXYZReady()) {                             //When accelerometer is not ready, wait .01 sec   
            wait(.01);
        } else {
            acc.readXYZGravity(&y, &x, &z);                 //notice this is passed by reference use pointers
            ship.setx_pos(-1*x*factor + offsetx);           //Spaceship xcord.
            ship.sety_pos(-1*y*factor + offsety);           //Spaceship ycord.
            ship.draw();                                    //Displays spaceship on LCD
            for (int i = 0; i < NUM_ASTEROIDS; i++) {
                ActiveAsteroids[i]->draw();                 
                  
                if (overlap(*ActiveAsteroids[i], ship)) {                                        //Checks of there is overlap between the asteroid and the ship.                                 
                    uLCD.BLIT(ship.getx_pos(), ship.gety_pos(), EARTH_WIDTH, EARTH_HEIGHT, explosion);  //Displays explosion for collision with asteroid. 
                    mySpeaker.PlayNote(500.0, 0.5, 0.5);    // Plays note on speaker. 
                    gameover = true;                                                            //Displays Game Lost Screen.    
                }
            }
        }
    }
    
    ship.update();
    for (int i = 0; i < NUM_ASTEROIDS; i++) {     //Updates Asteroids. 
        ActiveAsteroids[i]->update();
        }
    
                                                //If player dodges asteroids over 30 seconds, gamewon equals true, and displays You Won! on LCD.
    if (gamewon == true) {
        uLCD.cls();
        uLCD.color(WHITE);
        uLCD.locate(0,5);
        uLCD.printf("    You Won!");
        mySpeaker.PlayNote(800.0, 0.5, 0.5);    // Plays note on speaker. 
        uLCD.printf("\n");
        uLCD.printf("   5");
        wait(1);
        uLCD.printf(" 4");
        wait(1);
        uLCD.printf(" 3");
        wait(1);
        uLCD.printf(" 2");
        wait(1);
        uLCD.printf(" 1");
        wait(1);
    } else  {                                    //Player Lost the game, gamewon equals false, and displays You Lost! on LCD.
        uLCD.cls();
        uLCD.color(WHITE);
        uLCD.locate(0,5);
        uLCD.printf("  You LOST!!!!!\n");
        uLCD.printf("    Game Over!\n");
        uLCD.printf("\n");
        uLCD.printf("   5");                        //5 Second Timer to restart game. 
        wait(1);
        uLCD.printf(" 4");
        wait(1);
        uLCD.printf(" 3");
        wait(1);
        uLCD.printf(" 2");
        wait(1);
        uLCD.printf(" 1");
        wait(1);
    }                                               //End of else for if statement. 
    mbed_reset();                                   //restart game. 
}                                                   //end of main
