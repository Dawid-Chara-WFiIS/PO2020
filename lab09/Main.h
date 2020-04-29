#pragma once
#include "Point.h"
#include "abstractClasses.h"
#include <iostream>
#include <cmath>

// global function that draws an Drawable
void draw(Drawable*);

/*
    ------------------Inheritance documentation-----------------------
    Circle dervies from Drawable, Transformable, ClosedShape on public mode
    Line dervies from Drawable, Transformable on public mode
    Rectangle dervies from Drawable, Transformable, ClosedShape on public mode
*/
class Circle : public Drawable, public Transformable, public ClosedShape
{
    public:
        Circle(const Point& center, double radius) : Drawable(), Transformable(), ClosedShape(),
         _center(center), _radius(radius) {}
        virtual void draw() const override; // drawing circle, interface from Drawable
        virtual void shift(double, double) override; // shifting circle, interface from Transoformable
        virtual double area() const override; // counting area of circle, interface from ClosedShape

    private:
        Point _center;
        double _radius;

};

class Line : public Drawable, public Transformable
{
   public:
        Line(const Point& startPoint, const Point& endPoint) : Drawable(), Transformable(),
        _startPoint(startPoint), _endPoint(endPoint) {}
        virtual void draw() const override; // drawing line, interface from Drawable
        virtual void shift(double, double) override; // shifting line, interface from Transoformable

    private:
        Point _startPoint, _endPoint;
};

class Rectangle : public Drawable, public Transformable, public ClosedShape
{
   public:
        Rectangle(const Point& firstCorner, const Point& secondCorner) : Drawable(), Transformable(), ClosedShape(),
        _firstCorner(firstCorner), _secondCorner(secondCorner) {}
        virtual void draw() const override; // drawing rectangle, interface from Drawable
        virtual void shift(double, double) override; // shifting rectangle, interface from Transoformable
        virtual double area() const override; // counting area of rectangle, interface from ClosedShape

    private:
        Point _firstCorner, _secondCorner;
};
