#ifndef __SCREENOBJECT_H__
#define __SCREENOBJECT_H__

#include "uLCD_4DGL.h"
#define ASTEROID_HEIGHT 12
#define ASTEROID_WIDTH 15
#define SPRITE_MAX 15
#define EARTH_WIDTH 10
#define EARTH_HEIGHT 10
#define EXPLOSION1_WIDTH 20

#define SCREEN_MAX 125
#define SCREEN_MIN 1
#define NUM_ASTEROIDS 4

#define Q 0x808000 //OLIVE
#define I 0x008000 //GREEN
#define S 0xC0C0C0 //SILVER
#define C 0x17202A //UFO GLASS
#define D 0x797D7F //DARK GREY
#define L 0x00FF00 //LIME
#define P 0xFF00FF //PINK
#define R 0xF1C40F //YELLOW
#define O 0xF39C12 //ORANGE
#define G 0xAAB7B8 //GREY
#define _ 0x000000 //BLACK
#define X 0xFFFFFF //WHITE
#define B 0x0000FF //BLUE
#define r 0xFF0000 //RED

static uLCD_4DGL uLCD(p28, p27, p29);               //constant uLCD variable. 

class ScreenObject {
    public:
    virtual void draw() = 0;                    //draw function
    virtual void update() = 0;
    
    int getx_pos();                             //get xcord
    int gety_pos();
    
    void setx_pos(int);                            //setter for xcord/ycord
    void sety_pos(int);
    
    int getHeight();                //Getters: used to determine object overlap
    int getWidth();
    
    
    int* getSprite();                       //used for draw/update function which determines sprite to draw/update
    void setSprite(int *);
    
    
    private:
    int x_pos;                  //xcord
    int y_pos;                  //ycord
    int* sprite;                //Holds Sprite value
    int height;                 //For object height
    int width;                  //For object width
};

#endif