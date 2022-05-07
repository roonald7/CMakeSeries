#ifndef CUBE_H
#define CUBE_H

#include "solid.h"
#include <stdint.h>

class Cube : public Solid 
{
public:
    explicit Cube(uint8_t length, uint8_t width, uint8_t height);
    ~Cube();
    void area() override;
    void vertex() override;
    void volume() override;
    void type() override;

private:
    uint8_t length_;
    uint8_t width_;
    uint8_t height_;
};


#endif // CUBE_H