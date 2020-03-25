#include "SumOfElements.h"

void SumOfElements::print() const
{
    for(unsigned i = 0; i < _numbers.size() - 1; i++)
        std::cout << _numbers[i] << " + ";
    std::cout << _numbers.back();
}

double SumOfElements::eval() const
{
    double sum = 0;
    for(auto& number : _numbers)
        sum += number;
    return sum;
}