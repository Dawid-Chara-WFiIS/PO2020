#pragma once
#include "Animal.h"
#include <iostream>

class Sheep : public Animal
{
    public:
        Sheep (const std::string &name) : Animal(name), _isSheared(false) {}
        // added printing info in destructor
        virtual ~Sheep() override;
        virtual void print() const override;
        // shear the sheep
        void shear();

    private:
        bool _isSheared; // is sheep sheared?
};

class Horse : public Animal
// Horse implementation, derivees from Animal
{
    public:
        Horse (const std::string &name) : Animal(name) {}
        // added printing info in destructor

        virtual ~Horse() override;
        virtual void print() const override;
};

class Cow : public Animal
// Cow implementatin, derives from Animal
{
    public:
        Cow (const std::string &name) : Animal(name) {}
        // added printing info in destructor
        virtual ~Cow() override;
        virtual void print() const override;
};

