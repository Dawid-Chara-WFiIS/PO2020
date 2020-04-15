#include "Nodes.h"


void Node::setNext(Node* next)
{
    _next = next;
}

Node* Node::getNext()
{
    return _next;
}



// --------------- NodeInt Interface -----------------

void NodeInt::print() const
{
    std::cout << _num;
}

Node* NodeInt::clone() const
{
    return new NodeInt(_num);
}


// --------------- NodeString Interface -----------------

void NodeString::print() const
{
    std::cout << _str;
}

Node* NodeString::clone() const
{
    return new NodeString(_str);
}
