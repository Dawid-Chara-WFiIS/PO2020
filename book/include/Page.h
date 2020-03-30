#pragma once
#include <string>
#include <iostream>

class Page
{
    public:
        virtual void print() const;
        Page() : _header(""), _text("") {}
        virtual ~Page() = default;
        virtual void SetHeader(std::string);
        virtual void Text(std::string);
        virtual std::string Text();
        virtual std::string GetHeader() const;
        virtual void Print(unsigned) const;
        virtual void Print() const;
    private:
        std::string _header;
        std::string _text;

};