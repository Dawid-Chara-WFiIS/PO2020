#pragma once
#include "Operation.h"
#include <cmath>

class Exponentiation : public Operation
{
    public:
        Exponentiation(const double& base, const double& exponent) : _base(base), _exponent(exponent) {}
        void print() const override;
        double eval() const override;
    private:
        double _base, _exponent;
};
