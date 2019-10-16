#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int hours; //Asking user to enter the number of hours he/she worked in the week
	double wage;//Asking user to enter hourly wage
	double total_sal;//This variable is to store the final salary of the week

	cout << "Enter number of hours worked in a week" << "\n";
	cin >> hours; //Reading the hours value
	cout << "Enter the hourly wage" << "\n";
	cin >> wage; //Reading the value of wage
	total_sal = wage * hours; //Calculating the total salary 
	cout << "total salary of an employee is : " << total_sal; //Displaying the total salary
}