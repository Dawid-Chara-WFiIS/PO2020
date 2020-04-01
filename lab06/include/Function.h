#pragma once
#include  <cmath>
#include <iostream>


class Function
// abstract class, interface for function behaviour
{
    public:
        virtual ~Function() = default;
        virtual Function* allocMemory() const
        // virtual function allowing to make interfance of allocing new memory, for certain derived class
        {
            return nullptr;
        }
        virtual double calc(double argument) const
        // virtual function allowing to make interfance of calculating function value, and returning
        {
            return 0.0;
        }
        
};