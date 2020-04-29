#include "Main.h"

void draw(Drawable* object)
{
    object->draw();
}

void Circle::draw() const
{
    std::cout << "++ Rysuje kolo o srodku " << _center << " i promieniu 3\n";
}

void Circle::shift(double xShift, double yShift)
{
    const Point shiftVector(xShift, yShift);
    _center = _center + shiftVector;
}

double Circle::area() const
{
    return M_PI * pow(_radius, 2);
}


void Line::draw() const
{
    std::cout << "++ Rysuje linie od " << _startPoint <<  " do " << _endPoint << std::endl;
}

void Line::shift(double xShift, double yShift)
{
    const Point shiftVector(xShift, yShift);
    _startPoint = _startPoint + shiftVector;
    _endPoint = _endPoint + shiftVector;
}

void Rectangle::draw() const
{
    std::cout << "++ Rysuje prostokat o rogach w " << _firstCorner << " i " << _secondCorner << std::endl;
}

void Rectangle::shift(double xShift, double yShift)
{
    const Point shiftVector(xShift, yShift);
    _firstCorner = _firstCorner + shiftVector;
    _secondCorner = _secondCorner + shiftVector;
}

double Rectangle::area() const
{
    return abs((_firstCorner.getX() - _secondCorner.getX())*(_firstCorner.getY() - _secondCorner.getY()));
}