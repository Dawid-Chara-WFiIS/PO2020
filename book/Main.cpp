// Nazwa pliku wykonywalnego: Biblos

// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal
// sie, a wynik jego dzialania byl taki sam jak podany na końcu tego
// pliku.

// -----------------------------------------------------------------
// Prosze napisac klasy reprezentujace 
// A4Page, B5Page, TitlePage, Book.

// Poniżej założenia projektowe (wymagane):
// * Klasy (XPage) powinny być oparte o bazową klase Page.
// * Klasa Page zapewnia odpowiedni interfejs (metody virtualne)

// -----------------------------------------------------------------

// Uwaga: zadanie można realizować poprzez rozszerzenie implementacji
//        z poprzednich zajęć.

// W zadaniu mozna korzystac z elementow bilbioteki standardowej
// zwlaszcza klasy std::string, std::vector

// Pliku Main.cpp, nie wolno modyfikowac.

// Ostateczny program powinien byc przyjazny dla programisty (miec
// czytelny i dobrze napisany kod). 

// Rozwiązanie może być oparte o CMake lub własny Makefile.
// Makefile dolaczony do rozwiazania powinien tworzyc plik wykonywalny
// o nazwie Biblos. Program nalezy kompilowac z flagami -Wall -g.

// Makefile powinien zawierac rowniez cel "clean", ktory usuwa pliki
// obiektowe i plik wykonywalny.

// Przy wykonaniu zadania nie wolno korzystac z internetu, notatek,
// ani zadnych innych materialow (w tym wlasnych wczesniej
// przygotowanych plikow oprocz makefile).

// Rozwiazanie (archiwum biblos.tar.gz zawierajace dodane pliki, makefile i Main.cpp)
// nalezy wgrac do UPEL.

#include "Book.h"
 
int main()
{
        
    Book CppBook("OOP",5,"B5");                // przekazywany tytul ksiazki, liczba stron, format
    Book CppBookLab("OOPLab",10,"A4");         // przekazywany tytul ksiazki, liczba stron, format           
    
    CppBook.TitlePagePtr()->SetAuthor("StudentX");
    CppBookLab.TitlePagePtr()->SetAuthor("StudentY");

    CppBook[1]->SetHeader("C++, pierwsze starcie");
    CppBook[2]->Text("Lorem ipsum cpp...");
    CppBookLab[1]->SetHeader("Nuda jest wrogiem programistow");
    CppBookLab[2]->Text(CppBook[1]->Text());
    CppBookLab[3]->Text(CppBook[2]->Text());

    std::cout<< "Format: " << CppBook.Format()
             << " Pages: " << CppBook.size() << std::endl;
    std::cout<< CppBook << std::endl;

    std::cout<< "Format: " << CppBookLab.Format()
             << " Pages: " << CppBookLab.size() << std::endl;
    std::cout<< CppBookLab << std::endl;
 
    return 0;
}

/* Wynik działania programu: brachwal@vbox:[build]$ ./Biblos 
Format: B5 Pages: 6
[Book::Title]       OOP
[Book::Autor]       StudentX
[Page(2)::text]     Lorem ipsum cpp...
Format: A4 Pages: 11
[Book::Title]       OOPLab
[Book::Autor]       StudentY
[Page(3)::text]     Lorem ipsum cpp...
*/