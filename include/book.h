#include<iostream>
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
    : title(""),
      author(""),
      isbn(""),
      year(0),
      isAvailable(true)
    {
    }

    void AddBook();    //this func belongs to book
    void DisplayBook();   //both funcs. belong to same object
};
Book books[100];    //creating a library storage
int bookCount = 0;
int main()
{
    books[0].AddBook();
    books[0].DisplayBook();
    return 0;
}






void Book::AddBook()
{
    cout<<"You selected Add Book\n";
    cout<<"Enter book title: ";
    cin>>title; //y? bcos you already inside class book
    //inside a member func , on=bj can directly access priv data
    cout<<"Enter author: ";
    cin>>author;
    cout<<"Enter ISBN: ";
    cin>>isbn;
    cout<<"Enter publication year: ";
    cin>>year;
    isAvailable = true;
    cout<<"Book added successfully!\n";

};

void Book::DisplayBook()
{
    cout<<"You selected Display Book\n";
    cout<<"Title: "<<title<<endl;
    cout<<"Author: "<<author<<endl;
    cout<<"ISBN: "<<isbn<<endl;
    cout<<"Year: "<<year<<endl;
    cout << "\n===== BOOK DETAILS =====\n";
    if (isAvailable)
    {
        cout<<"Availability: Available\n";
    }
    else
    {
        cout<<"Availability: Borrowed\n";
    }

};
