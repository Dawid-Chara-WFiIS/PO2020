#include "Exponentiation.h"

void Exponentiation::print() const
{
    std::cout << _base << " ^ " << _exponent;
}

double Exponentiation::eval() const
{
    return std::pow(_base, _exponent);
}