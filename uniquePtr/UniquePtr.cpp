#include "UniquePtr.h"

UniquePtr::UniquePtr(cls* pointer)
{
    _pointer = pointer;
}

UniquePtr::UniquePtr(UniquePtr&& other)
{
    _pointer = std::exchange(other._pointer, nullptr);
}
UniquePtr::~UniquePtr()
{
    delete _pointer;
}

UniquePtr& UniquePtr::operator=(UniquePtr&& other)
{
    if(&other == this)
        return *this;

    delete _pointer;
    _pointer = std::exchange(other._pointer, nullptr);
    return *this;
}

cls* UniquePtr::get() const
{
    return _pointer;
}

cls* UniquePtr::release()
{
    return std::exchange(_pointer, nullptr);
}


cls* UniquePtr::operator -> () const
{
    return _pointer;
}

cls& UniquePtr::operator *() const
{
    return *_pointer;
} 

UniquePtr::operator bool() const
{
    if(_pointer == nullptr)
        return false;
    return true;
}


