#include "pyramid.h"
#include <iostream>

Pyramid::Pyramid(uint8_t length, uint8_t width, uint8_t height) 
    : length_(length), width_(width), height_(height)
{
    std::cout << "Constructor for pyramid " << "" << " called." << std::endl;
}

Pyramid::~Pyramid()
{
    std::cout << "Destructor for pyramid " << "" << " called" << std::endl;;
}

void Pyramid::area()
{
    std::cout << "Pyramid" << std::endl;
}

void Pyramid::vertex()
{
    std::cout << "Pyramid" << std::endl;
}

void Pyramid::volume()
{
    std::cout << "Pyramid" << std::endl;
}

void Pyramid::type()
{
    std::cout << "Pyramid" << std::endl;
}