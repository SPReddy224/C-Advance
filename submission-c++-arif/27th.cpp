/*#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int salary;
	bool married, quebecstatus;
	int child, tax;
	cout << " please enter the salary " << endl;
	cin >> salary;
	cout << " please enter 1 if married else not married enter 0" << endl;
	cin >> married;
	cout << " please enter the number of children you have" << endl;
	cin >> child;
	cout << " please enter 1 if newly arrived to quebec else 0" << endl;
	cin >> quebecstatus;
	if (salary <= 18000)
	{
		tax = salary * 0.10;
		cout << " the amount of tax to be paid is " << tax << endl;
	}
	else if (salary == 18000 && salary <= 32000)
	{

		tax = salary * 0.20;
		cout << " the amount of tax to be paid is " << tax << endl;
	}
	else if (salary == 32000 && salary <= 60000)
	{

		tax = salary * 0.30;
		cout << " the amount of tax to be paid is " << tax << endl;
	}
	else
	{

		tax = salary * 0.40;
		cout << " the amount of tax to be paid is " << tax << endl;
	}

	if (married == 1)
	{
		tax = tax - 0.02;
		tax = tax - (0.05* child);
		cout << " the amount of tax to be paid is " << tax << endl;
	}

	if (quebecstatus == 1)
	{
		tax = tax - 0.08;
		cout << " the tax amount to be paid is " << tax << endl;
	}
	system(" pause");
	return 0;

}*/