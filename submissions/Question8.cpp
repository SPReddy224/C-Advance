// Evl1-q1.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double kPa, atm; // Varriable to store the pressure in ktm and atm
	cout << "Enter the pressure in kPa  " << endl;
	cin >> kPa; //Reading the pressure in kpa
	atm = 0.00986923267*kPa; //Converting the pressure from kpa to atm
	cout << "Pressure in atm is : " << atm<<endl; //Displaying the value
	system("pause");
	return 0;
}
	