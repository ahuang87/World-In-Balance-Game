#include "SpaceShipEarth.h"


int spaceship1[EARTH_WIDTH *EARTH_HEIGHT] = {
    _,_,_,_,I,I,_,_,_,_,
    _,_,_,I,B,B,I,_,_,_,
    _,_,I,I,B,B,B,I,_,_,
    _,I,B,B,B,I,B,B,I,_,
    I,B,B,B,B,B,B,B,B,I,
    I,B,B,I,B,B,B,B,B,I,
    _,I,B,B,B,I,B,B,I,_,
    _,_,I,I,B,I,B,I,_,_,
    _,_,_,I,B,B,I,_,_,_,
    _,_,_,_,I,I,_,_,_,_,
 };
 
int erasescreen[EARTH_WIDTH * EARTH_HEIGHT] = {
    _,_,_,_,_,_,_,_,_,_,
    _,_,_,_,_,_,_,_,_,_,
    _,_,_,_,_,_,_,_,_,_,
    _,_,_,_,_,_,_,_,_,_,
    _,_,_,_,_,_,_,_,_,_,
    _,_,_,_,_,_,_,_,_,_,
    _,_,_,_,_,_,_,_,_,_,
    _,_,_,_,_,_,_,_,_,_,
    _,_,_,_,_,_,_,_,_,_,
    _,_,_,_,_,_,_,_,_,_, 
};

SpaceShipEarth::SpaceShipEarth() {
    setx_pos(65);                   //Displays spaceship in middle of screen.
    sety_pos(65);
    setSprite(spaceship1);
}

void SpaceShipEarth::draw() {
    uLCD.BLIT(getx_pos(), gety_pos(), EARTH_WIDTH, EARTH_HEIGHT, getSprite());
}

void SpaceShipEarth::update() {
    uLCD.BLIT(getx_pos(), gety_pos(), EARTH_WIDTH, EARTH_HEIGHT, erasescreen);
}