#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int fact=1;
	int num1, num2;
	cout << "Enter two numbers to get factorial for number between them" << endl;
	cin >> num1 >> num2;
	for (int j = num1; j <= num2; j++) {
		for (int i = 1; i <= j; i++) {
			fact = fact * i;
		}
		cout << fact << endl;
		fact = 1;
	}
	system("pause");
	return 0;
}