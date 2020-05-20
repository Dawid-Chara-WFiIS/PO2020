#pragma once
#include <iostream>
#include <stdexcept>

class Number{
    public:
        // nested wrapper class
        class NumberWrapper
        {
        public:
            // overloaded cout operator
            friend std::ostream& operator << (std::ostream& out, const NumberWrapper& wrappedNumber)
            {
                out << wrappedNumber._number;
                return out;
            }        
            // standard constructor, first parameter - wrapped double number, second - min boundary (double), third - max boundary (double)
            // checks if number belongs to specific range, otherwise throws std::out_of_range exception
            NumberWrapper(double);
            // overloaded = operator to enable secure changing of number value
            // checks if number to set - belongs to specific range, otherwise throws std::out_of_range exception
            void operator = (const double&);
        private:
            double _number; // wrapped number
        };
        // setting range 
        static void setRange(double, double);
        // construct wrapped number from a number
        Number(double number) : _wrappedNumber(number) {}
        // display number with auxilary string 
        void print() const;
        // get _wrappedNumber by reference
        NumberWrapper& value();
        // get _wrappedNumber by value
        NumberWrapper value() const;
        // storing number in specific range with safety enhancements

    private:
        NumberWrapper _wrappedNumber;
        static double min, max; // boundaries

};

