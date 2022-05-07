#include "cube.h"
#include <iostream>

Cube::Cube(uint8_t length, uint8_t width, uint8_t height)
    : length_(length), width_(width), height_(height)
{
    std::cout << "Constructor for cube " << "" << " called." << std::endl;
}

Cube::~Cube()
{
    std::cout << "Destructor for cube " << "" << " called." << std::endl;
}

void Cube::area()
{
    std::cout << "Cube" << std::endl;
}

void Cube::vertex()
{
    std::cout << "Cube" << std::endl;
}

void Cube::volume()
{
    std::cout << "Cube" << std::endl;
}

void Cube::type()
{
    std::cout << "Cube" << std::endl;
}