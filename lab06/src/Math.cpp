#include "Math.h"

double Sin::calc(double argument) const
{
    return sin(_parameter * argument);
}

void Sin::set_parameter(double newParameter)
{
    _parameter = newParameter;
}

Sin* Sin::allocMemory() const
{
    Sin* memoryPtr = new Sin(*this);
    return memoryPtr;
}

double Quadratic::calc(double argument) const 
{
    return _a * pow(argument, 2) + _b * argument + _c;
}

double Derivative::calc(double argument) const
{
    return (_fnc->calc(argument + _dx) - _fnc->calc(argument - _dx))/(2*_dx);
}

Quadratic* Quadratic::allocMemory() const
{
    Quadratic* memoryPtr = new Quadratic(*this);
    return memoryPtr;
}

Derivative::~Derivative()
{
    delete _fnc;
}

Derivative::Derivative(const Derivative& other)
{
    _dx = other._dx;
    _fnc = other._fnc->allocMemory();
}

void Derivative::set_dx(double dx)
{
    _dx = dx;
}


Derivative* Derivative::allocMemory() const
{
    Derivative* memoryPtr = new Derivative(*this);
    return memoryPtr;
}
