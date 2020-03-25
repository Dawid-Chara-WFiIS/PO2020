#include "List.h"


void List::insert(int numToInsert)
{
    _list.push_back(numToInsert);
}

void List::print() const
{
    std::cout << "[ ";
    for(auto& num: _list)
        std::cout << num << " ";
    std::cout << "]\n";
}

void List::print(std::string label) const
{
    std::cout << label << std::endl;
    print();
}

int& List::operator [](unsigned index)
{
    return _list[index];
}

List List::filter(std::function<comparator> cmp)
{
    List matchingCompare;
    for(int value: _list)
        if(cmp(value))
            matchingCompare.insert(value);
    return matchingCompare;
}
