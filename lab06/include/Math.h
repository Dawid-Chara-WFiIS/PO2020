#pragma once
#include "Function.h"

class Sin : public Function
// Sinus implementation class
{
    public:
        // basic constructor, one double as parameter needed
        Sin(double parameter) : _parameter(parameter) {}
        // calculating sinus value
        double calc(double) const override;
        // setter for _parameter
        void set_parameter(double);
        //  allocates memory for new object, and returns pointer to the memory
        Sin* allocMemory() const override;
    private:
        double _parameter; // simply it is multiplier for argument to sinus function
};

class Quadratic : public Function
// Quadratic function implementation
{
    public:
        // basic constructor with 3 doubles needed as parameters
        Quadratic(double a, double b, double c) : _a(a), _b(b), _c(c) {}
        // calculating function value
        double calc(double) const override;
        //  allocates memory for new object, and returns pointer to the memory
        Quadratic* allocMemory() const override;

    private:
        double _a, _b, _c; // simply _a*x^2 + _b*x + _c = f(x)
};

class Derivative : public Function 
// Derivative implementatioon
{
    public:
        // basic constructor from pointer to derived class from function (Function is abstract class)
        Derivative(Function* fnc) : _fnc(fnc), _dx(0.01) {}
        // copy constructor, allocates new memory with allocMemory interface (from Function abc)
        Derivative(const Derivative&);
        // deletes holded object
        ~Derivative();
        //  allocates memory for new object, and returns pointer to the memory
        Derivative* allocMemory() const override;
        // calculating derivative, numerically 	df/dx ----> ( f(x+dx)-f(x-dx) )/(2 dx)
        double calc(double) const override;
        // setter for _dx
        void set_dx(double);

    private:
        Function* _fnc; // pointer to function, which derivative is counted
        double _dx; // var for numerical calculations of derivative
};