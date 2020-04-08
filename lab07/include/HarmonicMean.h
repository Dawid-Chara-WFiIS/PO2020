#pragma once
#include "ArithmeticMean.h"
#include <iostream>
#include <string>

class HarmonicMean : public Mean
{
    public:
        HarmonicMean() = default;
        static HarmonicMean* create()
        {
            return new HarmonicMean;
        }
        // overridden function from base class, return specific string description for this class
        std::string printType() const override;
        // overridden function from base class, adds number to _sum in appropirate type for class (1/X)
        void add(double) override;
        // overridden function from base class, counting result in appropirate type for class (_quantity/_sum)
        double result() const override;



};