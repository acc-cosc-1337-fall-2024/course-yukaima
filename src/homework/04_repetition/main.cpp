//write include statements
#include <iostream>
#include "repetition.h"

//write using statements
using std::cout;
using std::cin;


int main() 
{
	int choice, number, number1, number2;
	char exit_choice;

	do
	{
		cout<<"\nMENU\n";
		cout<<"1-Factorial\n";
		cout<<"2-Greatest Common Divisor\n";
		cout<<"3-Exit\n";

		cout << "Enter the choice: ";
	    cin >> choice;

		switch (choice)
		{
		case 1:
			cout<<"Please enter the number you want to get its factorial(int): ";
			cin>>number;
			cout<<"The factorial is "<< factorial(number);

			break;
		case 2:
		    cout<<"You want to get the greatest common divisor \n Please enter the first number(int): ";
			cin>>number1;

			cout<<"Please enter the second number(int): ";
			cin>>number2;

			cout<<"The greatest common divisor is "<< gcd(number1, number2);
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
