#ifndef TANK_H
#define TANK_H

#include "Object.h"

const OBJECT_TYPE TANK_OBJECT = 4;

class Tank : public Object
{
    public:
        Tank() : Object(TANK_OBJECT) {};
        ~Tank();

    private:  

};

#endif // TANK_H
