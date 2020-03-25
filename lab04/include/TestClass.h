#pragma once
#include <iostream>
#include <string>


class TestClass{
    public:
        TestClass(std::string label) : _name(label)
        {
            std::cout << "++ Tworze obiekt TestClass: " << _name << std::endl;
        }
        ~TestClass()
        {
            std::cout << "-- Usuwam obiekt TestClass: " <<_name << std::endl;
        }
        std::string info() const;
        void setName(std::string name);
    private:
        std::string _name;




};