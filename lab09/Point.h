#pragma once
#include <iostream>


class Point
{
    public:
        // display coords
        friend std::ostream& operator << (std::ostream&, const Point&);
        // constructor
        Point(double x, double y) : _x(x), _y(y) {}
        // enabling + oprator
        Point& operator + (const Point&);
        // coords getters
        double getX() const;
        double getY() const;

    private:
        // x, y coords
        double _x;
        double _y;
};

