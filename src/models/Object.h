#ifndef OBJECT_H
#define OBJECT_H

typedef unsigned short int OBJECT_TYPE;

class Object
{
    public:
        Object(OBJECT_TYPE type) : type(type) {};
        ~Object();

        OBJECT_TYPE getType()
        {
            return type;
        };

    private:  
        OBJECT_TYPE type;

};

#endif // OBJECT_H
