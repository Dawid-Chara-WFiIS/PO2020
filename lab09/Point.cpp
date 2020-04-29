#include "Point.h"

std::ostream& operator << (std::ostream& out, const Point& obj)
{
    out << '(' << obj._x << ", " << obj._y << ')';
    return out;
}

Point& Point::operator + (const Point& other)
{
    _x += other._x;
    _y += other._y;
    return *this;
}

double Point::getX() const
{
    return _x;
}
double Point::getY() const
{
    return _y;
}
