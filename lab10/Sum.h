#pragma once
#include "Data.h"


class Sum
{
    public:
        Sum(float value) : _value(value) {} // construct sum with float
        void operator ()(float); // use sum like function, overload () operator to add float to _value
        float value() const; // getter for value

    private:
        float _value;

};