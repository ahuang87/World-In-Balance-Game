#ifndef __ABSTRACTASTEROID_H__
#define __ABSTRACTASTEROID_H__
#include "ScreenObject.h"

class AbstractAsteroid : public ScreenObject {
    public:
    int getdeltaX();      //Getters: returns deltaX
    int getdeltaY(); 
    
    void setXPath(int);   //Setters: 
    void setYPath(int);
    
    virtual void draw();            //draw function
    virtual void update();          //update function
    
    private:
    int deltaX;
    int deltaY;
          
};

#endif