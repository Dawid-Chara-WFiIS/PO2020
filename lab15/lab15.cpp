/*
  Celem zadania jest przećwiczenie szablonów klas. 
  Chcemy utworzyć klasę MyArray, w której można przechowywać 
  obiekty dowolnych typów.

  Na koniec dodatkowo jest do napisania prosta klasa Printer z 
  funkcjami szablonowymi do wypisywania.

  Proszę umieścić definicje metod poza ciałem klasy.

  Uwaga: w programie nie może być żadnych wycieków pamięci.   
  W przeciwnym razie jest 0 pkt za wykonanie.

  Wskazówki:
  - Kluczem w tym zadaniu jest przypomnienie sobie jaki zrobić 
    kontener polimorficzny.
  - Poza widocznymi klasami trzeba wymyslić dodatkową hierarchię, 
    która pozwoli na przechowanie oryginałów obiektów dowolnych klas.
  - W metodzie remove proszę wykorzystać algorytmy stl 
    (podpowiedź: 1 algorytm i 1 metoda kontenera).
 */

#include <iostream>
#include <string>
#include "MyArray.h"
#include "Printer.h"

MyArray::~MyArray() = default;

struct Book{
  Book(const char* title): _title(title){}
  std::string _title;
  friend std::ostream& operator<<(std::ostream &o, const Book& b){ return o << b._title; }
};

int main() {   
  MyArray a;
  a.add(7);
  a.add<float>(1.14);  
  a.add(17);
  a.add<double>(4.04);  
  ", " << a;

  std::cout << "====== with books ======" << std::endl;
  a.add(Book("The Feynman Lectures on Physics"));
  a.add(Book("Lux perpetua")); 
  a.add(17);
  "\n" << a;

  std::cout << "===== remove books =====" << std::endl;
//   usuwanie obiektów wybranych typów
  a.remove<Book>();
  ", " << a;

  // teraz wypisujemy rozne rzeczy np. liczby, tablice...
  std::cout << "======== Printer ========" << std::endl;
  Printer p;
  // p.print(Book("Lux perpetua"));
  // p.print(8.0);

  int table[]{5, 3, -1, 20, 11};
//   p.print(table);
}

/* wynik
7, 1.14, 17, 4.04
====== with books ======
7
1.14
17
4.04
The Feynman Lectures on Physics
Lux perpetua
17
===== remove books =====
7, 1.14, 17, 4.04, 17
======== Printer ========
1: Lux perpetua
2: 8
3: 5 3 -1 20 11 
 */
