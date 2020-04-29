#include "Point.h"

Point::Point(int x, int y) : x(x), y(y) 
{
    std::cout<< "++ Tworze punkt (" << x << ", " << y << ")\n";
}
Point::~Point()
{
    std::cout<< "-- Usuwam punkt (" << x << ", " << y << ")\n";
}

std::string Point::info() const
{
    return "pkt " + std::to_string(x) + ", " + std::to_string(y); 
}