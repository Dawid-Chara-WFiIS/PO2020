#pragma once
#include <string>
#include <stdexcept>


class Factory
// factory simulation class
{
    public:
        // supply prototype with specific source 
        template <typename T>
        void prototype(T source);

        // manufacture from prototype
        template <typename T>
        T& manufacture();

        
    private:
        // store specific source from prototype
        template <typename T>
        T* store(T* source);

};

template <typename T>
void Factory::prototype(T source)
{
    store<T>(new T(source));
}

template <typename T>
T& Factory::manufacture() 
{
    T* source = store<T>(nullptr);
    if(source)
        return *source;
    else throw std::runtime_error("no prototype for this type");
    
}

template <typename T>
T* Factory::store(T* source)
{
    static T* proto = nullptr;
    if(source)
    {
        if(!proto)
            proto = source;
        else
        {
            *proto = *source;
            delete source;

        }
    }
    return proto;
}