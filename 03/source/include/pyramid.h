#ifndef PIRAMID_H
#define PIRAMID_H

#include "solid.h"
#include <stdint.h>

class Pyramid : public Solid {
public:
    explicit Pyramid(uint8_t length, uint8_t width, uint8_t height);
    ~Pyramid();
    void area() override;
    void vertex() override;
    void volume() override;
    void type() override;

private:
    uint8_t length_;
    uint8_t width_;
    uint8_t height_;
};

#endif // PIRAMID_H