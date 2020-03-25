#pragma once
#include <iostream>
#include "TestClass.h"
#include <utility>


class SmartPtr{
    // implementation of SmartPointer, only 1 pointer can contain pointer to certain object
    public:
        using ptrType = TestClass; //define class pointer type alias
        // basic constructor, create SmartPtr by providing pointer of type ptrType as argument
        SmartPtr(ptrType* objPointer) : _objPointer(objPointer) {}
        // move constructor, init new object, set new _objPointer same as moved _objPointer,
        // set moved _objPointer to null (only 1 pointer can indicate on same object)
        SmartPtr(SmartPtr&& other) : _objPointer(std::exchange(other._objPointer, nullptr)) {}
        // delete memory allocated with _objPointer
        ~SmartPtr();

        // returns raw _objPointer
        ptrType* get();
        // returns raw _objPointer and then set _objPointer to nullptr aka releasing pointer
        ptrType* release();
        // overloaded -> operator, to simulate pointer behaviour
        ptrType* operator -> ();
        // overloaded * operator, to get (by reference) object pointed by _objPointer
        ptrType& operator *();
        // move assignment, move _objPointer from another to this, and set another _objPointer to nullptr
        SmartPtr& operator = (SmartPtr&&);
        // defines conversion from SmartPtr object to bool, returns true if _objPointer is not nullptr, otherwise false
        explicit operator bool() const;

    private:
        ptrType* _objPointer = nullptr; // pointer to any ptrType object
};