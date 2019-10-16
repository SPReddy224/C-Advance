// Evl1-q1.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float food, household, weekly, transit, rent, bills, monthly;//Varraible to take expenses
	float cheque1, cheque2; //inputs to read cheque amounts
	float final_amount, total_expenses, total_income;//Varriable to store final calculations
	cout << "---EXPENSES---" << "\n";
	cout << "Enter total amount for food and household (WEEKLY) " << "\n";
	cin >> food >> household; //Reading food and household expenses
	weekly = food + household; // Adding food and household and storing them in weekly as they are weekly expenses(perweek)
	cout << "Enter the amount for Public Transit" << endl;
	cin >> transit;//Reading the Transit expenses
	cout << "Enter the amount for Rent" << endl;
	cin >> rent;//Reading the Rent expenses


	cout << "Enter the amount for  monthly bills" << endl;
	cin >> bills;//Reading the bills
	monthly = transit + rent + bills;//Adding transit,rent and bills and storing them in monthly as they are monthly expenses
	cout << "Enter the net salary of first cheque" << endl;
	cin >> cheque1;//Reading the cheque1 amount
	cout << "Enter the net salary of second cheque" << endl;
	cin >> cheque2;//Reading the cheque2 amount

	total_income = cheque1 + cheque2;//adding the values of cheque1 and cheeque3 to income as they both are income
	total_expenses = (weekly * 4) + monthly;//multiplying the weekly expenses with 4 as we have 4 weeks in a month
	final_amount = total_income - total_expenses;//calculating the profit/loss according the expenses and income
	cout << "Total Expenses : " << total_expenses << endl;//Displaying the total expenses
	cout << "Total income : " << total_income << endl;//Displaying the total income
	cout << "The Difference is : " << final_amount << endl;//Displaying the total profit/loss


	

	system("pause");
	return 0;
}
