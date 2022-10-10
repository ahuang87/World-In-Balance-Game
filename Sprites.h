//Contains Sprites: 
#ifndef __SPRITES_H__
#define __SPRITES_H__
#include "ScreenObject.h"

int asteroid_sprite_1[ASTEROID_HEIGHT * ASTEROID_WIDTH] = {
_,_,_,_,X,X,X,X,X,X,X,X,_,_,_, 
_,_,_,X,_,_,_,_,_,_,_,_,X,_,_, 
_,_,X,_,_,_,_,_,_,_,_,_,X,_,_, 
_,X,_,_,_,_,_,_,_,_,_,_,X,_,_, 
X,X,X,X,_,_,_,_,_,_,_,_,_,X,_, 
_,_,_,X,_,_,_,_,_,_,_,_,_,X,_, 
_,_,X,_,_,_,_,_,_,_,_,_,_,X,_, 
_,X,_,_,_,_,_,X,_,_,_,_,_,X,_, 
X,_,_,_,_,_,X,X,_,_,_,_,X,_,_, 
_,X,_,_,_,X,_,X,_,_,_,_,X,_,_, 
_,_,X,_,X,_,_,X,_,_,_,X,_,_,_, 
_,_,_,X,_,_,_,X,X,X,X,_,_,_,_
};

int asteroid_sprite_2[ASTEROID_HEIGHT * ASTEROID_WIDTH] = {
_,_,_,_,X,X,_,_,_,X,X,_,_,_,_, 
_,_,_,X,_,_,X,_,X,_,_,X,_,_,_, 
_,_,X,_,_,_,_,X,_,_,_,_,X,_,_, 
_,X,_,_,_,_,_,_,_,_,_,_,_,X,_, 
_,X,_,_,_,_,_,_,_,_,_,_,X,_,_, 
_,X,_,_,_,_,_,_,_,_,_,X,_,_,_, 
_,X,_,_,_,_,_,_,_,_,_,_,X,_,_, 
_,X,_,_,_,_,_,_,_,_,_,_,_,X,_, 
_,X,_,_,_,_,_,_,_,_,_,_,X,_,_, 
_,X,_,_,_,_,_,_,_,_,_,_,X,_,_, 
_,_,X,_,_,_,_,_,_,_,_,X,_,_,_, 
_,_,_,X,X,X,X,X,X,X,X,_,_,_,_ 
};

int asteroid_sprite_3[ASTEROID_HEIGHT * ASTEROID_WIDTH] = {
_,_,_,X,X,X,X,X,X,X,X,_,_,_,_, 
_,_,_,_,X,_,_,_,_,_,_,X,_,_,_, 
_,_,_,_,_,X,_,_,_,_,_,_,X,_,_, 
_,X,X,X,X,X,X,_,_,_,_,_,_,X,_, 
X,_,_,_,_,_,_,_,_,_,_,_,_,X,X, 
X,_,_,_,_,_,_,_,_,_,_,_,X,_,_, 
X,_,_,_,_,_,_,_,_,_,_,X,_,_,_, 
X,_,_,_,_,_,_,_,_,_,X,_,_,_,_, 
X,_,_,_,_,_,_,_,_,_,_,X,_,_,_, 
_,X,_,_,_,_,_,_,_,_,_,_,X,_,_, 
_,_,X,_,_,_,_,_,X,X,X,_,_,X,_, 
_,_,_,X,X,X,X,X,_,_,_,X,X,_,_ 
};

int asteroid_sprite_4[ASTEROID_HEIGHT * ASTEROID_WIDTH] = {
_,_,_,X,X,X,_,_,X,X,X,X,_,_,_, 
_,_,X,_,_,_,X,X,_,_,_,_,X,_,_, 
_,X,_,_,_,_,_,_,_,_,_,_,_,X,_, 
_,_,X,X,_,_,_,_,_,_,_,_,X,_,_, 
_,_,_,_,X,_,_,_,_,_,_,X,_,_,_, 
_,_,_,_,_,X,_,_,_,_,_,_,X,_,_, 
_,_,_,_,X,_,_,_,_,_,_,_,_,X,_, 
_,_,_,X,_,_,_,_,_,_,_,_,_,_,X, 
_,_,X,_,_,_,_,_,_,_,_,_,_,X,_, 
_,_,_,X,_,_,_,_,_,X,X,_,_,X,_, 
_,_,_,_,X,X,_,_,X,_,_,X,X,X,_, 
_,_,_,_,_,_,X,X,_,_,_,_,X,_,_ 
};





int explosion[EARTH_HEIGHT * EARTH_WIDTH] = {
    _,_,_,r,_,_,r,_,_,_,
    _,_,r,r,r,r,r,r,_,_,
    _,r,O,O,O,O,O,O,r,_,
    _,r,O,O,O,O,O,O,O,r,
    _,r,O,O,O,O,O,O,r,_,
    r,O,O,O,O,O,O,O,O,r,
    _,r,O,O,O,O,O,O,r,_,
    _,r,O,O,O,r,O,O,O,r,
    _,_,r,O,r,r,r,O,r,_,
    _,_,_,r,_,_,_,r,_,_,
};

int erase[EARTH_WIDTH * EARTH_HEIGHT] = {
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

int spaceship[EARTH_WIDTH *EARTH_HEIGHT] = {
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
 
 ConcreteAsteroid1::ConcreteAsteroid1() {
    setSprite(asteroid_sprite_1);
    
    setx_pos((rand() % (64 - EARTH_WIDTH + ASTEROID_WIDTH)));
    sety_pos((rand() % (64 - EARTH_HEIGHT - ASTEROID_HEIGHT)));
    if (rand() % 2 == 0)
    {
        setx_pos(getx_pos());
    } else {
        setx_pos(128 - getx_pos());
        }
    
    if (rand() % 2 == 0)
    {
        sety_pos(gety_pos());
    } else {
        sety_pos(128 - gety_pos());
        }
        
    
    setXPath((rand() % 2 + 1));
    setYPath((rand() % 2 + 1));
    
    
}

ConcreteAsteroid2::ConcreteAsteroid2() {
    setSprite(asteroid_sprite_2);
    
    setx_pos((rand() % (64 - EARTH_WIDTH + ASTEROID_WIDTH)));
    sety_pos((rand() % (64 - EARTH_HEIGHT - ASTEROID_HEIGHT)));
    if (rand() % 2 == 0)
    {
        setx_pos(getx_pos());
    } else {
        setx_pos(128 - getx_pos());
        }
    
    if (rand() % 2 == 0)
    {
        sety_pos(gety_pos());
    } else {
        sety_pos(128 - gety_pos());
        }
    setXPath((rand() % 2 + 1));
    setYPath((rand() % 2 + 1));
}

ConcreteAsteroid3::ConcreteAsteroid3() {
    setSprite(asteroid_sprite_3);
    setx_pos((rand() % (64 - EARTH_WIDTH + ASTEROID_WIDTH)));
    sety_pos((rand() % (64 - EARTH_HEIGHT - ASTEROID_HEIGHT)));
    if (rand() % 2 == 0)
    {
        setx_pos(getx_pos());
    } else {
        setx_pos(128 - getx_pos());
        }
    
    if (rand() % 2 == 0)
    {
        sety_pos(gety_pos());
    } else {
        sety_pos(128 - gety_pos());
        }
    setXPath((rand() % 2 + 1));
    setYPath((rand() % 2 + 1));
}

ConcreteAsteroid4::ConcreteAsteroid4() {
    setSprite(asteroid_sprite_4);
    setx_pos((rand() % (64 - EARTH_WIDTH + ASTEROID_WIDTH)));
    sety_pos((rand() % (64 - EARTH_HEIGHT - ASTEROID_HEIGHT)));
    if (rand() % 2 == 0)
    {
        setx_pos(getx_pos());
    } else {
        setx_pos(128 - getx_pos());
        }
    
    if (rand() % 2 == 0)
    {
        sety_pos(gety_pos());
    } else {
        sety_pos(128 - gety_pos());
        }
        
    setXPath((rand() % 2 + 1));
    setYPath((rand() % 2 + 1));
}


bool overlap(ScreenObject & object1, ScreenObject & object2) {
    int delX = object1.getx_pos() - object2.getx_pos();
    int delY = object1.gety_pos() - object2.gety_pos();
    if (delX > 0)
    {
        delX = delX;
    } else {
        delX = -delX;
    }
    
    if (delY > 0)
    {
        delY = delY;
    } else {
        delY = -delY;
    }
    if (delX <= (object1.getWidth() + object2.getWidth())) 
    {
        if (delY <= (object1.getHeight() + object2.getHeight())) {
            return true;
        }
    }
    return false;
}

#endif