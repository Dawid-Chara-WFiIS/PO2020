#include "Page.h"


void Page::print() const
{
}

void Page::SetHeader(std::string header)
{
    _header = header;
}

void Page::Text(std::string text)
{
    _text = text;
}

std::string Page::Text()
{
    return _text;
}

std::string Page::GetHeader() const
{
    return _header;
}

void Page::Print(unsigned nPage) const
{
    if(_text != "")
        std::cout << "[Page(" << nPage << ")::text]     " << _text;
}

void Page::Print() const
{

}