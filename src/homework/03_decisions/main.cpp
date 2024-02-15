//write include statements
#include <iostream>
#include "decisions.h"
#include <string>

using std::cout;
using std::cin;
using std::string;

int main() 
{
	int grade , Menu_choice;

	cout << "Main Menu \n";
    cout << "1-Letter grade using if \n";
    cout << "2-Letter grade using switch \n";
    cout << "3-Exit \n";

	cout << "Enter the choice: ";
	cin >> Menu_choice;

	switch (Menu_choice)
	{
		case 1:
	        cout << "Please enter your numerical grade here(0-100): ";
		    cin >> grade;
			if (00 <= grade && grade <= 100)
			{
				cout << "Your Letter grade is: " << get_letter_grade_using_if(grade);
			}
			else
			{
				cout << "the number is out of range";
			}
		    break;

		case 2:
	        cout << "Please enter your numerical grade here(0-100): ";
		    cin >> grade;
			if (00 <= grade && grade <= 100)
			{
				cout << "Your Letter grade is: " << get_letter_grade_using_switch(grade);
			}
			else
			{
				cout << "the number is out of range";
			}
		    break;
		default:
		    cout << "Exit";
			break;
	}
	

	
	return 0;
}