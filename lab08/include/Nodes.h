#pragma once
#include <iostream>
#include <string>

class Node
{
    public:
        Node(Node* next) : _next(next) {}
        virtual void print() const = 0;
        virtual void setNext(Node*);
        virtual Node* getNext();
        virtual Node* clone() const = 0;
        virtual ~Node()
        {
            if(_next != nullptr)
                delete _next;   
        }

    private:
        Node* _next;


};

class NodeInt : public Node
{
    public:
        NodeInt(int num) : Node(nullptr), _num(num) {}
        void print() const override;
        Node* clone() const override;
    private:
        int _num;
};


class NodeString : public Node
{
    public:
        NodeString(std::string str) : Node(nullptr), _str(str) {}
        void print() const override;
        Node* clone() const override;

    private:
        std::string _str;
};