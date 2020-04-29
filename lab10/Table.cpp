#include "Table.h"

void Table::operator += (Data data)
{
    _v.push_back(data);
    if(_minLength == 0) _minLength = data.size();
    if(data.size() < _minLength) _minLength = data.size();
}

void Table::print() const
{
    std::for_each(_v.begin(), _v.end(), [](const Data& item){item.print();});
    std::cout << std::endl;
}

bool cmpElementwise(const Data& data, const Data& other, unsigned colNumber)
{
    if(data[colNumber] > other[colNumber]) return true;
    else return false;
}

Table& Table::sort(unsigned rowNumber)
{
    if(rowNumber >= _minLength)
    {
        std::cout << "Indeks " << rowNumber << " nieprawidlowy!\n";
        return *this;
    }
    using namespace std::placeholders;
    auto cmp = std::bind(cmpElementwise, _1, _2, rowNumber);
    std::sort(_v.begin(), _v.end(), cmp);
    return *this;
}

Table& Table::sortBy(std::function<bool(const Data&, const Data&)> cmp)
{
    std::sort(_v.begin(), _v.end(), cmp);
    return *this;
}