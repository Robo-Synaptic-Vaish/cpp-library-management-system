#include<iostream>
#include<string>
using namespace std;
#include "../include/book.h"

Book::Book()
    : title(""),
      author(""),
      isbn(""),
      year(0),
      isAvailable(true)
{
}

bool Book::SearchBook(stringTitle)
{
    return title == searchTitle;
}

void Book::AddBook()
{
    cout << "You selected Add Book\n";

    cout << "Enter book title: ";
    cin.ignore();
    getline(cin, title);
    cin >> title;

    cout << "Enter author: ";
    getline(cin, author);
    cin >> author;

    cout << "Enter ISBN: ";
    cin >> isbn;

    cout << "Enter publication year: ";
    cin >> year;

    isAvailable = true;

    cout << "Book added successfully!\n\n";
}

void Book::DisplayBook()
{
    cout << "\n===== BOOK DETAILS =====\n";
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "ISBN: " << isbn << endl;
    cout << "Year: " << year << endl;

    if (isAvailable)
    {
        cout << "Availability: Available\n";
    }
    else
    {
        cout << "Availability: Borrowed\n";
    }

    cout << endl;
}