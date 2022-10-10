#include "AbstractAsteroid.h"

//Getters: 

int AbstractAsteroid::getdeltaX() 
    {
        return deltaX;
    }

int AbstractAsteroid::getdeltaY() 
    {
        return deltaY;
    }

//Setters: 

void AbstractAsteroid::setXPath(int deltaX) 
    {
        this->deltaX = deltaX;
    }

void AbstractAsteroid::setYPath(int deltaY) 
    {
        this->deltaY = deltaY;
    }



int erased[ASTEROID_WIDTH * ASTEROID_HEIGHT] = {
 _,_,_,_,_,_,_,_,_,_,_,_,_,_,_,
 _,_,_,_,_,_,_,_,_,_,_,_,_,_,_,
 _,_,_,_,_,_,_,_,_,_,_,_,_,_,_,
 _,_,_,_,_,_,_,_,_,_,_,_,_,_,_,
 _,_,_,_,_,_,_,_,_,_,_,_,_,_,_,
 _,_,_,_,_,_,_,_,_,_,_,_,_,_,_,
 _,_,_,_,_,_,_,_,_,_,_,_,_,_,_,
 _,_,_,_,_,_,_,_,_,_,_,_,_,_,_,
 _,_,_,_,_,_,_,_,_,_,_,_,_,_,_,
 _,_,_,_,_,_,_,_,_,_,_,_,_,_,_,
 _,_,_,_,_,_,_,_,_,_,_,_,_,_,_,
 _,_,_,_,_,_,_,_,_,_,_,_,_,_,_
};

void AbstractAsteroid::draw() 
{
    uLCD.BLIT(getx_pos(), gety_pos(), ASTEROID_WIDTH, ASTEROID_HEIGHT, getSprite());     //draws sprite on lcd. 
}

void AbstractAsteroid::update() 
{
    uLCD.BLIT(getx_pos(), gety_pos(), ASTEROID_WIDTH, ASTEROID_HEIGHT, erased);
    setx_pos(getx_pos() + getdeltaX());
    sety_pos(gety_pos() + getdeltaY());
}