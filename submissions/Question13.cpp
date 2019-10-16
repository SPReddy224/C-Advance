#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int quantity = 0,basePrice=1;
	char clubValue;
	double total_price;
	cout << "Enter the no of untis you want to buy " << endl;
	cin >> quantity;
	cout << "Enter Y if you are a member of the club Z else N" << endl;
	cin >> clubValue;
	if (quantity > 25) {
		total_price = 25 + (quantity - 25)*0.70;
			}
	else {
		total_price = quantity * 1;
	}
	if (clubValue = 'Y') {
		total_price = total_price - total_price * 2 / 100;
		cout<<"The Bill Amount Is: " << total_price << endl;
	}
	else {
		total_price = total_price;
		cout << "The Bill Amount Is: " << total_price << endl;
	}

	
	system("pause"); return 0;
}