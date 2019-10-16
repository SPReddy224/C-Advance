// Evl1-q1.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int no_of_copies,temp;//Varriables to read input and for temporary calculations
	double price;//Varriable to store the final price/ill
	cout << "Enter the number of copies "<<endl; 
	cin >> no_of_copies;//Reading the no of copies 
	if (no_of_copies <= 100)//calculating the bill  if the quantity is 100 or less
	{
		price = no_of_copies * 0.05;
		cout << "Total bill is : " << price << " $";//Displaying the final price
	}
	else if(no_of_copies>100) { //Calcullating the bill for the first 100 copies and the subsequent copies if the quantity is more than 100
		temp = no_of_copies - 100;
		price = 100 * 0.05 + temp * 0.03;
		
		cout << "Total bill is : " << price << " $";//Displaying the final price
	}
	system("pause");
	return 0;
}
