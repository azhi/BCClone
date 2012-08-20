#ifndef LEVEL_OBJECT_H
#define LEVEL_OBJECT_H

#include "Object.h"

const OBJECT_TYPE LEVEL_OBJECT = 3;

class LevelObject : public Object
{
    public:
        LevelObject() : Object(LEVEL_OBJECT) {};
        ~LevelObject();

    private:  

};

#endif // LEVEL_OBJECT_H
