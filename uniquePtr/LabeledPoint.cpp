#include "LabeledPoint.h"

void LabeledPoint::setLabel(std::string newLabel)
{
    _label = newLabel;
}


std::string LabeledPoint::info() const
{
    std::string baseInfo = Point::info();
    return baseInfo + " " + _label;
}


void setName(Point* point, std::string newLabel)
{
    LabeledPoint* lblPoint = dynamic_cast<LabeledPoint*> (point);
    lblPoint->setLabel(newLabel);
    point = lblPoint;
}