#include <iostream>
#include "func.h"
#include <string>


using std::cout;
using std::cin;
using std::string;

int main() 
{
	//variable
    int choice;
    string dna;
	string reversed_dna;
	char exit_choice;

    do 
	{
        cout << "\nMain Menu\n";//menu
		cout << "***Enter 1 to Get GC Content or 2 to Get DNA Complement***\n";
        cout << "1- Get GC Content\n";
        cout << "2- Get DNA Complement\n";
        cout << "3- Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) 
		{
            case 1:
                cout << "Enter DNA String (Capitalized): ";
                cin >> dna;
                cout << "GC Content: " << get_gc_content( dna ) << "\n";
                break;
            case 2:
                cout << "Enter DNA String (Capitalized): ";
                cin >> dna;
                cout << "DNA Complement: " << get_dna_complement( dna ) << "\n";
           break;
            case 3:
		    cout<<"Are you sure you want to exit?(y or n): ";
			cin>> exit_choice;
			if (exit_choice == 'y'|| exit_choice == 'Y')
			{
				cout<<"EXIT";
				choice = 4;
			}
			else if (exit_choice == 'n'|| exit_choice == 'N')
			{
				choice = 3;
			}
			else
			{
				cout<<"error";
			}
			
		    break;
		default:
		    cout<<"Invalid choice! Please enter a valid option.";
			break;
        }
    } while (choice != 4);

    return 0;
}
