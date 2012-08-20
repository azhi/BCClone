#ifndef BULLET_H
#define BULLET_H

#include "Object.h"

const OBJECT_TYPE BULLET_OBJECT = 2;

class Bullet : public Object
{
    public:
        Bullet() : Object(BULLET_OBJECT) {};
        ~Bullet();

    private:  

};

#endif // BULLET_H
