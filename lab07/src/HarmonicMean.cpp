#include "HarmonicMean.h"

// HarmonicMean interface
std::string HarmonicMean::printType() const
{
    return "Harmonic";
}

void HarmonicMean::add(double number)
{
    update(1/number);
}


double HarmonicMean::result() const
{
    if(getSum() == 0)
        return 0;
    return getQuantity() / getSum();
}
