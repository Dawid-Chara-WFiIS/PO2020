#include "ArithmeticMean.h"

// Mean interface
std::ostream& operator << (std::ostream& out, const Mean& mean)
{
    out << mean.printType();
    return out;
}

Mean& Mean::operator << (double number)
{
    add(number);
    return *this;
}

const Mean& Mean::operator << (double number) const
{
    std::cout << "cannot add value " << number <<" to const\n";
    return *this;
}

std::string Mean::printType() const
{
    return "base Mean";
}

double Mean::result() const
{
    return 0;
}

void Mean::add(double)
{

}
void Mean::update(double number)
{
    _sum += number;
    _quantity++;
}

double Mean::getSum() const
{
    return _sum;
}

double Mean::getQuantity() const
{
    return _quantity;
}

void Mean::reset()
{
    _sum = 0;
    _quantity = 0;
}

// Arithmetic interface

std::string ArithmeticMean::printType() const
{
    return "Arithmetic";
}

void ArithmeticMean::add(double number)
{
    update(number);
}

double ArithmeticMean::result() const
{
    if(getQuantity() == 0)
        return 0;
    return getSum() / getQuantity();
}


