#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

struct Solid {
    virtual void area() = 0;
    virtual void vertex() = 0;
    virtual void volume() = 0;
    virtual void type() = 0;
};

#endif // DOG_H