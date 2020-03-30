#pragma once 
#include <string>
#include <vector>
#include <iostream>
#include "A4Page.h"
#include "B5Page.h"
#include "TitlePage.h"


class Book
{
    public:
        friend std::ostream& operator << (std::ostream&, const Book&);
        Book(std::string title, unsigned nPages, std::string format) : _format(format), _nPages(nPages + 1)
        {
            _titlePage = new TitlePage(title);
            _pages.push_back(_titlePage);
            if(_format == "A4")
            {
                for(unsigned i = 0; i < _nPages; i++)
                    _pages.push_back(new A4Page);
            }
            else if(_format == "B5")
            {
                for(unsigned i = 0; i < _nPages; i++)
                    _pages.push_back(new B5Page);
            }
        }
        ~Book()
        {
            for(auto& page: _pages)
                delete page;
        }
        TitlePage* TitlePagePtr();
        Page* operator [](unsigned);
        std::string Format();
        unsigned size();

    private:
        std::string _format;
        TitlePage* _titlePage;
        unsigned _nPages;
        std::vector<Page*> _pages;

};