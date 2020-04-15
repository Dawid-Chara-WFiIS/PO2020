#pragma once
#include "Nodes.h"
#include <iostream>
#include <utility>

class PLinkedList
{
    public:
        friend std::ostream& operator << (std::ostream&, const PLinkedList&);
        PLinkedList() : _head(nullptr) {}
        PLinkedList(const PLinkedList&);
        PLinkedList(PLinkedList&&);
        ~PLinkedList();
        PLinkedList& operator = (const PLinkedList&);
        PLinkedList& operator = (PLinkedList&&);
        PLinkedList& addFront(Node*);
        Node* head();

    private:
        Node* _head;



};