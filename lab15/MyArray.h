#pragma once
#include <vector>
#include <memory>
#include <algorithm>
#include <type_traits>


class Item
// base class to enable polymporphic vector
{
    public:
        virtual ~Item() = default;
        virtual void print() const = 0;
};

template <typename T>
class UsefulItem : public Item
// derived template class - specified methods for operations on wrapped item
{
    public:
        // default useful constructor
        UsefulItem(T item) : _item(item) {}
        virtual ~UsefulItem() = default;
        virtual T getItem() const {return _item;} 
        virtual void setItem(const T& item) {_item = item;}
        virtual void print() const
        {
            std::cout << _item;
        }

    protected:
        T _item;
};



class MyArray
{
    public:
        friend void operator << (std::string str, const MyArray& arr);
        MyArray() = default;
        ~MyArray();
        template <typename T>
        void add(const T& object);

        template<typename T>
        void remove();

    private:
        std::vector<std::unique_ptr<Item>> _container;

};


void operator << (std::string str, const MyArray& arr)
{
    for(auto& item: arr._container)
    {
        item->print();
        std::cout << str;
    }
    std::cout << std::endl;
}

template <typename T>
void MyArray::add(const T& object)
{
    std::unique_ptr<Item> wrapped = std::make_unique<UsefulItem<T>>(object);
    _container.push_back(std::move(wrapped));
}

template<typename T>
void MyArray::remove()
{ 
    _container.erase(std::remove_if(_container.begin(), _container.end(),
    [](auto&& item){return dynamic_cast<UsefulItem<T>*>(item.get());}), _container.end());
}

