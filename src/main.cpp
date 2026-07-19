#include<iostream>
using namespace std;

void showMenu()
    {
        cout<<"===========================\n";
        cout<<" LIBRARY MANAGEMENT SYSTEM \n";
        cout<<"===========================\n\n";

        cout<<" 1. Add Book\n";
        cout<<" 2. Display Books\n";
        cout<<" 3. Search Book\n";
        cout<<" 4. Borrow Book\n";
        cout<<" 5. Return Book\n";
        cout<<" 6. Exit\n\n";
        cout<<" Enter your choice: ";
        
    };

int main()
{
    int choice = 0;
        do 
        {
            showMenu();
            cin>>choice;
            switch(choice)
            {
                case 1:
                    cout<<"Add Book selected.\n\n";
                    break;

                case 2:
                    cout<<"Display Books selected.\n\n";
                    break;

                case 3:
                    cout<<"Search Book selected.\n\n";
                    break;

                case 4:
                    cout<<"Borrow Book selected.\n\n";
                    break;

                case 5:
                    cout<<"Return Book selected.\n\n";
                    break;

                case 6:
                    cout<<"Exiting...\n\n";
                    break;

                default:
                    cout<<"Invalid choice.\n\n";
            }
        }
        while (choice!=6);
    return 0;
};



