#pragma once
#include <functional>
#include <vector>


using comparator = bool(int);

class FilterCriteria{
    public:
        FilterCriteria() = default;
        void add(std::function<comparator>);
        int size() const;
        std::function<comparator> get(int) const;
    private:
        std::vector<std::function<comparator>> _criteria;


};
