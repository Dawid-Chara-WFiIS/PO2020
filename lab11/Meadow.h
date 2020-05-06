#pragma once
#include "Animal.h"
#include "Animals.h"

#include <vector>
#include <memory>
#include <iostream>
#include <set>
#include <algorithm>


class Meadow
{
    public:
        Meadow() = default;
        // add Animal to meadow, specifically use move to add to vector
        void add(std::unique_ptr<Animal>);
        // print meadow on screen
        void print(const std::string&) const;
        // count names of animals present on meadow, using std::set, std::sort, std::count
        void countNames() const;
        // select sheeps from meadow and group them into herd, checking done with validating dynamic_cast to Sheep*
        std::vector<Sheep*> getSheepHerd();

    private:
        // container for Animals objects, aka meadow
        std::vector<std::unique_ptr<Animal>> _container;
};