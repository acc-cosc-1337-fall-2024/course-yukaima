﻿//write include statements
#include "hwexpressions.h"
#include <iostream>

//write namespace using statement for cout
using std::cout;
using std::cin;


double main()
{
	double meal_amount, tip_rate, tip_amount, tax_amount, total;

	cout << "Please enter the meal amount: ";
	cin >> meal_amount;

	tax_amount = get_sales_tax_amount(meal_amount);

	cout << "Please enter the tip rate: ";
	cin >> tip_rate;

	tip_amount = get_tip_amount(meal_amount,tip_rate);

	total = tip_amount + tax_amount + meal_amount;

	cout << "Meal Amount: " << meal_amount << "\n";
    cout << "Sales Tax: " << tax_amount << "\n";
    cout << "Tip Amount: " << tip_amount << "\n";
    cout << "Total: " << total << "\n";

	return 0;
}
