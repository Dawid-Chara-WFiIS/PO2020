#include "Sum.h"

Sum sumData(const Data& data)
{
    return Sum(std::accumulate(data._v.begin(), data._v.end(), 0.0));
}

void Sum::operator ()(float arg)
{
    _value += arg;
}

float Sum::value() const
{
    return _value;
}