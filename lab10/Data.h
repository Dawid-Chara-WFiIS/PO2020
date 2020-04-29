#pragma once
#include <utility>
#include <initializer_list>
#include <vector>
#include <string>
#include <iomanip>
#include <iostream>
#include <numeric>
#include <algorithm>
#include <functional>

class Sum;

class Data
{
    public:
        friend Sum sumData(const Data&); // friend class Sum declaration
        Data(std::string label, std::initializer_list<float> initList) : _v(initList), _label(label) {} // initialize Data from label
        // and {} list (initializer list)
        void print() const; // print data
        float operator [] (unsigned) const; // overload [] operator to get access to _v elements
        unsigned size() const; // get size of _v

    private:
        std::vector<float> _v;
        std::string _label;

};