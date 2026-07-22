#ifndef BOOK_H
#define BOOK_H

#include<iostream>
#include<string>
using namespace std;

class Book   //design of what a book should look like
{
    private:   // data hidden from outside the class
// only class itslef can directly modify these variables
//This is called encapsulation.
    string title;           //these are book objects
    string author;         //data members
    string isbn;
    int year;
    bool isAvailable;  //can someone borrow this book rn?

    public:
    Book();

    void AddBook();
    void DisplayBook();
    bool SearchBook(string searchTitle);
    bool BorrowBook(string searchTitle);
    bool ReturnBook(string searchTitle);
};

#endif