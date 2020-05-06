#include "Meadow.h"


void Meadow::add(std::unique_ptr<Animal> animal)
{
    _container.push_back(std::move(animal));
}

void Meadow::print(const std::string& label) const
{
    std::cout << "=== " << label << " ===\n";
    for(auto& animal: _container)
    {
        animal->print();
        std::cout << std::endl;
    }
}

void Meadow::countNames() const
{
    std::vector<std::string> names;
    for(auto& animal: _container)
        names.push_back(animal->name());
    
    std::sort(names.begin(), names.end());
    std::set<std::string> keys(names.begin(), names.end());
    for(auto& key: keys)
        std::cout << key << ": " << std::count(names.begin(), names.end(), key) << std::endl;
    
}

std::vector<Sheep*> Meadow::getSheepHerd()
{
    std::vector<Sheep*> sheepHerd;
    for(auto& animal: _container)
    {
        auto casted = dynamic_cast<Sheep*>(animal.get());
        if(casted) sheepHerd.push_back(casted);
    }
    return sheepHerd;
}
