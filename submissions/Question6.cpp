#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int base_salary = 400; // Base Salary of the Employee
	int commission = 200; // The commision for one successful sale 
	int no_of_vehicles;   // Input varriable to read number of vehicles sold by the employee
	float bonus;          // Varriable to calculate and store the bonus
	cout << "Enter the number of vehicles sold by the employee" << "\n";
	cin >> no_of_vehicles; // Reading the number  of vehicles sold by the employee
	commission = no_of_vehicles  * 200; //Calculating the commission
	bonus = 0.05*commission; //Calculating of  the bonus
	base_salary = base_salary+bonus + commission; //Adding base_salary,commission and bonus 
	cout << " Total salary is : " << base_salary<<endl; // Displaying the total salary of the employee
	system("pause");
	return 0;
	 
		
}