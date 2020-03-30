#include "TitlePage.h"

void TitlePage::SetAuthor(std::string author)
{
    _author = author;
}

void TitlePage::Print() const
{
    std::cout << "[Book::Title]       "<< GetHeader() << std::endl;
    std::cout << "[Book::Autor]       "<< _author << std::endl;
}