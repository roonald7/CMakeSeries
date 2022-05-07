#include "cube.h"
#include "pyramid.h"
#include <memory>
#include <iostream>
#include <vector>

enum class SolidType {
    UNKNOWN = 0,
    CUBE = 1,
    PYRAMID = 2
};

SolidType solid_type(int type)
{
    switch (type)
    {
        case 1:
            return SolidType::CUBE;
        case 2:
            return SolidType::PYRAMID;
    }
    return SolidType::UNKNOWN;
}

std::unique_ptr<Solid> make_solid(SolidType type)
{
    switch (type)
    {
        case SolidType::CUBE:
            return std::make_unique<Cube>(2,3,4);
        case SolidType::PYRAMID:
            return std::make_unique<Pyramid>(4,5,6);
        case SolidType::UNKNOWN:
            throw;
    }
    throw;
}

int main(int argc, char** argv) {

    try
    {   
        auto solid_1 = make_solid(solid_type(1));
        auto solid_2 = make_solid(solid_type(2));
        
        solid_1->type();
        solid_2->type();
    }

    catch (...)
    {
        std::cout << "Unknown Solid" << std::endl;
    }
    
    return 0;
}