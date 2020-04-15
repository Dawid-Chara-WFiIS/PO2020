#include "PLinkedList.h"


std::ostream& operator << (std::ostream& out, const PLinkedList& list)
{
    list._head->print();
    Node* _current = list._head->getNext();
    while(_current != nullptr)
        {
            out << " -> ";
            _current->print();

            _current = _current->getNext();
        }

    return out;
}


PLinkedList& PLinkedList::addFront(Node* node)
{
    Node* newNode = node->clone();
    if(_head != nullptr)
        newNode->setNext(_head);

    _head = newNode;
    return *this;
}

PLinkedList::PLinkedList(const PLinkedList& other)
{
    std::cout << "--- copying list: " << other;
    Node* iter = other._head->getNext();
    _head = other._head->clone();
    while(iter != nullptr)
    {
        addFront(iter);
        iter = iter->getNext();
    }
    std::cout << std::endl;
}

PLinkedList& PLinkedList::operator = (PLinkedList&& other)
{
    std::cout << " --- move assign: " << other << std::endl;
    delete _head;
    _head = std::exchange(other._head, nullptr);
    return *this;
}

PLinkedList::PLinkedList(PLinkedList&& other) : _head(nullptr)
{
    std::cout << "--- moving list: " << other;
    _head = std::exchange(other._head, nullptr);
    std::cout << std::endl;
}

PLinkedList::~PLinkedList()
{
    delete _head;
}

Node* PLinkedList::head()
{
    return _head;
}
