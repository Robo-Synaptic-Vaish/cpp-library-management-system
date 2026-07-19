#include<iostream>
using namespace std;

class Book
{
    private:   // data hidden from the outside world
// only class itslef can directly modify these variables
//This is called encapsulation.
    string title;
    string author;
    string isbn;
    int year;
    bool isAvailable;

    public:
    Book()
    {
        title = "";
        author = "";
        isbn = "";
        year = 0;
        isAvailable = true;
    }
};