#include "ScreenObject.h"

int ScreenObject::getx_pos() {              //getters:
    return x_pos;
}

int ScreenObject::gety_pos() {
    return y_pos;   
}

int ScreenObject::getHeight() {
    return height;
}

int ScreenObject::getWidth() {
    return width;
}

int* ScreenObject::getSprite() {
    return sprite;
}

void ScreenObject::setx_pos(int x_pos) {                //setters: 
    this->x_pos = x_pos;
}

void ScreenObject::sety_pos(int y_pos) {
    this->y_pos = y_pos;   
}


void ScreenObject::setSprite(int * sprite) {
    this->sprite = sprite;
}
