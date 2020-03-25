#pragma once
#include "Operation.h"
#include <vector>

class SumOfElements : public Operation
{
    public:
        SumOfElements(double* numbers, int numbersLength)
        {
            for(int i = 0; i < numbersLength; i++)
                _numbers.push_back(numbers[i]);
        }
        void print() const override;
        double eval() const;
        
    private:
        std::vector<double> _numbers;
};