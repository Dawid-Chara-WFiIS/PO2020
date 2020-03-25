#include "SmartPtr.h"

SmartPtr::~SmartPtr()
{
    delete _objPointer;
}

SmartPtr::ptrType* SmartPtr::get()
{
    return _objPointer;
}

SmartPtr::ptrType* SmartPtr::release()
{
    return std::exchange(_objPointer, nullptr);
}

SmartPtr::ptrType* SmartPtr::operator -> ()
{
    return get();
}

SmartPtr::ptrType& SmartPtr::operator * ()
{
    return *_objPointer;
}

SmartPtr& SmartPtr::operator = (SmartPtr&& other)
{
    if(this != &other)
    {
        delete _objPointer;
        _objPointer = other._objPointer;
        other._objPointer = nullptr;
        return *this;
    }
    else
    {
        return *this;
    }
    
}

SmartPtr::operator bool() const
{
    if(_objPointer == nullptr)
        return false;
    else
        return true;
}




