#pragma once
#include "Point.h"
#include <utility>

using cls = Point;

class UniquePtr
{
    public:
        UniquePtr(cls*);
        UniquePtr(UniquePtr&&);
        ~UniquePtr();
        UniquePtr& operator=(UniquePtr&&);
        cls* get() const;
        cls* release();
        cls* operator -> () const;
        cls& operator *() const; 
        explicit operator bool() const;
    private:
        cls* _pointer;

};