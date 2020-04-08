#pragma once
#include <iostream>
#include <string>

class Mean
// base class for entire task
{
    public:
        // overloading << operator to perform displaying on screen
        friend std::ostream& operator << (std::ostream&, const Mean&);
        // overloading << operator to perform adding to sum
        Mean& operator << (double);
        //  overloading << operator to prevent adding to const, and displaying error
        const Mean& operator << (double) const;
        // basic constructor
        Mean() : _sum(0), _quantity(0) {}
        // virtual destructor
        virtual ~Mean() {}
        // virtual function that returns specific string description of class
        virtual std::string printType() const;
        // virtual function that provide interface for mean calculation
        virtual double result() const;
        // virtual function that provide interface for adding to sum
        virtual void add(double);
        // virtual function that provide updating private parameters of base class, _sum and _quantity
        virtual void update(double);
        // getter of _sum
        virtual double getSum() const;
        // getter of _quantity
        virtual double getQuantity() const;
        // reseting quantity of 0
        virtual void reset();
    private:
        double _sum; // just sum of provided elements
        unsigned _quantity; // how many elements were provided

};

class ArithmeticMean : public Mean
{
    public:
        ArithmeticMean() = default;
        // overridden function from base class, return specific string description for this class
        std::string printType() const override;
        // overridden function from base class, adds number to _sum in appropirate type for class (num)
        void add(double) override;
        // overridden function from base class, counting result in appropirate type for class _sum/_q
        double result() const override;

};