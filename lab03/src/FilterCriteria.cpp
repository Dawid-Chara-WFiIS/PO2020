#include "FilterCriteria.h"

void FilterCriteria::add(std::function<comparator> cmp)
{
    _criteria.push_back(cmp);
}

int FilterCriteria::size() const
{
    return _criteria.size();
}

std::function<comparator> FilterCriteria::get(int idx) const
{
    return _criteria[idx];
}