#pragma once
#include "Point.h"
#include <string>

class LabeledPoint : public Point
{
    public:
        LabeledPoint(std::string label, int x, int y) : Point(x, y), _label(label)
        {  
            std::cout << "++ Tworze punkt o nazwie " << _label << std::endl;
        }
        void setLabel(std::string);
    	virtual std::string info() const override;

    private:
        std::string _label;
};

void setName(Point*, std::string);
