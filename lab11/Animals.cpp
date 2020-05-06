#include "Animals.h"

// ---------------------- SHEEP INTERFACE -----------------------------

Sheep::~Sheep()
{
    print();
    std::cout << " wraca do zagrody\n";
}

void Sheep::print() const
{
    std::cout << "- Owca " << name();
    _isSheared ? std::cout << " ostrzyzona" : std::cout << " nieostzyrzona";
}

void Sheep::shear()
{
    _isSheared = true;
}

// ---------------------- HORSE INTERFACE -----------------------------

Horse::~Horse()
{
    print();
    std::cout << " wraca do zagrody\n";
}

void Horse::print() const
{
    std::cout << "- Kon " << name();
}

// ---------------------- Cow INTERFACE -----------------------------

Cow::~Cow()
{
    print();
    std::cout << " wraca do zagrody\n";
}

void Cow::print() const
{
    std::cout << "- Krowa " << name();
}

