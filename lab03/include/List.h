#pragma once
#include <vector>
#include <iostream>
#include <functional>

using comparator = bool(int);

class List{
    public:
        List() = default;
        void insert(int);
        void print() const;
        void print(std::string) const;
        int& operator [](unsigned);
        List filter(std::function<comparator>);

    private:
        std::vector<int> _list;
};
