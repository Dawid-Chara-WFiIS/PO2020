#pragma once
#include "Page.h"
#include <iostream>


class TitlePage : public Page
{
    public:
        TitlePage(std::string title) : _author("")
        {
            SetHeader(title);
        }
        void SetAuthor(std::string);
        void Print() const override;

    private:
        std::string  _author;
};