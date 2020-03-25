#include "TestClass.h"


std::string TestClass::info() const
{
    return _name;
}
void TestClass::setName(std::string name)
{
    _name = name;
}
