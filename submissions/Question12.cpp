// Evl1-q1.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double bill,tip;//Varriables to read the bill and calculate the tip
	cout << "Enter the total bill for the order"<<endl;
	cin >> bill; //Reading the bill
	if (bill >= 1) {//Checking whether the bill is meeting the criteria to give tip to the server
		tip = bill * 15 / 100; //Calculating the tip
		cout << "The tip for this order is : " << tip <<" $"<< endl;//Displaying the tip
	}
	else {
		cout << "Sorry , you won't get any tip for this order."<<endl; // this block runs when the bill is less than 1$
	}

	

	system("pause");
	return 0;
}
