#ifndef BONUS_H
#define BONUS_H

#include "Object.h"

const OBJECT_TYPE BONUS_OBJECT = 1;

typedef unsigned short int BONUS_TYPE;

class Bonus : public Object
{
    public:
        Bonus(BONUS_TYPE bonusType) : Object(BONUS_OBJECT), bonusType(bonusType) {};
        ~Bonus();

        BONUS_TYPE getBonusType()
        {
            return bonusType;
        }

    private:
        BONUS_TYPE bonusType;

};

#endif // BONUS_H
