#include "../include/book.h"

Book::Book()
    : title(""),
      author(""),
      isbn(""),
      year(0),
      isAvailable(true)
{
}

void Book::AddBook()
{
    cin.ignore();

    cout << "Enter book title: ";
    getline(cin, title);

    cout << "Enter author: ";
    getline(cin, author);

    cout << "Enter ISBN: ";
    getline(cin, isbn);

    cout << "Enter publication year: ";
    cin >> year;

    isAvailable = true;

    cout << "\nBook added successfully!\n";
}

void Book::DisplayBook()
{
    cout << "\n===== BOOK DETAILS =====\n";
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "ISBN: " << isbn << endl;
    cout << "Year: " << year << endl;

    if(isAvailable)
    {
        cout << "Availability: Available\n";
    }
    else
    {
        cout << "Availability: Borrowed\n";
    }

    cout << endl;
}

bool Book::SearchBook(string searchTitle)
{
    return title == searchTitle;
}

bool Book::BorrowBook(string searchTitle)
{
    if(title == searchTitle)
    {
       if(isAvailable)
       {
        isAvailable = false;
        return true;
       }
       else
       {
        cout<<"Book is already borrowed!\n";
        return false;
       }
    }
    return false;
}

bool Book::ReturnBook(string searchTitle)
{
    if(title == searchTitle)
    {
        if(!isAvailable)
        {
            isAvailable = true;
            return true;
        }
        else
        {
            cout<<"Book is already available!\n";
            return false;
        }
    }
    return false;
}
