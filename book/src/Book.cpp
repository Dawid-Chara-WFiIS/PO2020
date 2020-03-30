#include "Book.h"


std::ostream& operator << (std::ostream& out, const Book& book)
{
    book._pages[0]->Print();
    for(unsigned i = 1; i < book._nPages - 1; i++)
        book._pages[i]->Print(i);
    return out;
}


TitlePage* Book::TitlePagePtr()
{
    return _titlePage;
}

Page* Book::operator [](unsigned idx)
{
    return _pages[idx];
}

std::string Book::Format()
{
    return _format;
}

unsigned Book::size()
{
    return _nPages;
}
