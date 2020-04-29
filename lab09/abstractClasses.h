#pragma once

// Abstract class closed shape to represent shape that has area property
class ClosedShape
{
    public:
        // interface for area method
        virtual double area() const = 0;
};

// Abstract class closed shape to represent shape that could be drawn
class Drawable
{
    public:
        // interface for drawing the shape
        virtual void draw() const = 0;
};

class Transformable
// Abstract class closed shape to represent shape that could be shifted
{
    public:
        // interface for shifting the shape
        virtual void shift(double, double) = 0;
};