#include "Data.h"

void Data::print() const
{
    std::cout << _label;
    std::for_each(_v.begin(), _v.end(), [](float item){std::cout << std::setw(6) << item;});
    std::cout << std::endl;
}

unsigned Data::size() const
{
    return _v.size();
}

float Data::operator [] (unsigned idx) const
{
    return _v[idx];
}

