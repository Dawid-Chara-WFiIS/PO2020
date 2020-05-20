#include "Number.h"

double Number::min = 0;
double Number::max = 0;


void Number::setRange(double min, double max) 
{
    Number::min = min;
    Number::max = max;
}

void Number::print() const
{
    std::cout << "Number: " << _wrappedNumber <<" is in the range ["<< min <<", "<< max << "]\n";
}


Number::NumberWrapper& Number::value()
{
    return _wrappedNumber;
}

Number::NumberWrapper Number::value() const
{
    return _wrappedNumber;
}


Number::NumberWrapper::NumberWrapper(double number)
{
    if(number > Number::max || number < Number::min)
        throw std::out_of_range("exception: Out of range during construction");
    else _number = number;
}

void Number::NumberWrapper::operator = (const double& number)
    {
    if(number > Number::max || number < Number::min)
        throw std::out_of_range("exception: Out of range during assignment");
    else _number = number;
}