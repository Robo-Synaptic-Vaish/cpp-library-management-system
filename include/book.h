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
    Book()       //constructor, automatically runs w/o us calling

    void AddBook();    //this func belongs to book
    void DisplayBook();   //both funcs. belong to same object
    bool SearchBook(string searchTitle);
};

#endif