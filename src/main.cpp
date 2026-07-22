#include <iostream>
#include <string>
#include "../include/book.h"

using namespace std;

// Creating the library
Book books[100];
int bookCount = 0;

void showMenu()
{
    cout << "===========================\n";
    cout << " LIBRARY MANAGEMENT SYSTEM \n";
    cout << "===========================\n\n";

    cout << "1. Add Book\n";
    cout << "2. Display Books\n";
    cout << "3. Search Book\n";
    cout << "4. Borrow Book\n";
    cout << "5. Return Book\n";
    cout << "6. Exit\n\n";

    cout << "Enter your choice: ";
}

int main()
{
    int choice;

    do
    {
        showMenu();
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                if(bookCount >= 100)
                {
                    cout << "Library is full!\n\n";
                }
                else
                {
                    books[bookCount].AddBook();
                    bookCount++;
                }
                break;
            }

            case 2:
            {
                if(bookCount == 0)
                {
                    cout << "No books in the library.\n\n";
                }
                else
                {
                    cout << "\n========== DISPLAY ==========\n";

                    for(int i = 0; i < bookCount; i++)
                    {
                        books[i].DisplayBook();
                    }
                }
                break;
            }

            case 3:
            {
                if(bookCount == 0)
                {
                    cout << "No books in the library.\n\n";
                    break;
                }

                cout << "\n========== SEARCH ==========\n";

                cin.ignore();

                string searchTitle;

                cout << "Enter book title: ";
                getline(cin, searchTitle);

                bool found = false;

                for(int i = 0; i < bookCount; i++)
                {
                    if(books[i].SearchBook(searchTitle))
                    {
                        cout << "\nBook Found!\n";
                        books[i].DisplayBook();

                        found = true;
                        break;
                    }
                }

                if(!found)
                {
                    cout << "Book not found!\n";
                }

                break;
            }

            case 4:
            {
                if(bookCount == 0)
                {
                    cout<<"No books in the library.\n";
                    break;
                }
                string borrowTitle;
                cin.ignore();
                cout<<"Enter book title to borrow: ";
                getline(cin, borrowTitle);
                bool found = false;
                
                for(int i = 0; i <bookCount;i++)
                {
                    if(books[i].BorrowBook(borrowTitle))
                    {
                        cout << "Book borrowed successfully!\n";
                        found = true;
                        break;
                    }
                }

                if(!found)
                {
                    cout << "Book not found!\n";
                }

                break;
            }
            case 5:
            {
                cout << "Return Book feature coming soon.\n\n";
                break;
            }

            case 6:
            {
                cout << "Thank you for using the Library Management System!\n";
                break;
            }

            default:
            {
                cout << "Invalid choice. Please try again.\n\n";
            }
        }

    } while(choice != 6);

    return 0;
}