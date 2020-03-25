#include "Division.h"

void Division::print() const
{
    std::cout << _numerator << " / " << _denominator;
}

double Division::eval() const
{
    return _numerator/_denominator;
}
