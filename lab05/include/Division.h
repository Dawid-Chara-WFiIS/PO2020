#pragma once
#include "Operation.h"



class Division : public Operation
{
    public:
        Division(const double& numerator, const double& denominator) : _numerator(numerator), _denominator(denominator) {}
        void print() const override;
        double eval() const;
    private:
        double _numerator, _denominator;
};

