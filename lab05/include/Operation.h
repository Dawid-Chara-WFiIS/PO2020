#pragma once
#include <string>
#include <iostream>

class Operation
{
    public:
        friend void operator >>= (const std::string&, const Operation&);
        Operation() = default;
        virtual ~Operation() = default;
        virtual void print() const {}
        virtual double eval() const {return 0;}
};

// void operator >>= (const std::string&, const Operation&);