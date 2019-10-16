// Evl1-q1.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double current_balance=15000, withdraw_amount;
	cout << "Enter the amount you want to withdraw"<<endl;
	cin >> withdraw_amount;
	if (withdraw_amount > current_balance) {
		cout << "Please Enter The Valid Amount"<<endl;
	}
	else if (withdraw_amount < current_balance) {
		current_balance = current_balance - withdraw_amount;
		cout << "Current Balance is : " << current_balance<<endl;
	}
	system("pause");
	return 0;
}