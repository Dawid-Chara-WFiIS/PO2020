#pragma once
#include "Data.h"

class Table
{
    public:
        Table() : _minLength(0) {} // constructor 
        void operator += (Data); // overload += operator, to append rows to table
        void print() const; // print table using rows print functions
        Table& sort(unsigned); // sort table, specify column number
        Table& sortBy(std::function<bool(const Data&, const Data&)>); // sort table by specific comparator function
    private:
        std::vector<Data> _v; // container for rows
        unsigned _minLength; // minimum of lengths of rows

};

bool cmpElementwise(const Data& data, const Data& other, unsigned colNumber); // element-wise comparator for data
