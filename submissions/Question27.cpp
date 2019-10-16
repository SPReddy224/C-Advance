#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double salary, children, tax = 0;
	int married, new_comer;
	cout << "Enter your salary" << endl;
	cin >> salary;
	cout << "Enter 1 if your are married else 0 " << endl;
	cin >> married;
	cout << "Enter 1 if you are a new comer to quebec else 0" << endl;
	cin >> new_comer;
	cout << "Enter number of childrens you have " << endl;
	cin >> children;
	tax = (married && new_comer) ? (children*0.5) + 2 + 8 : (married) ? (children*0.5) + 2 : (new_comer) ? (children*0.5) + 8 : (children*0.5);
	if (salary >= 0 && salary <= 18000) {
		tax = 10 - tax;
	}
	else if (salary > 18000 && salary <= 32000)
	{
		tax = 20 - tax;
	}
	else if (salary > 32000 && 60000) {
		tax = 30 - tax;
	}
	else {
		tax = 40 - tax;
	}
	if (tax > 0) {
		cout << "Payable Tax amount : " << salary * tax / 100 << " $" << endl;
	}
	else {
		cout << "nothing to be paid" << endl;
	}
	system("pause"); return 0;
}