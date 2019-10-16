#include "pch.h"
#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;
int sum(int x, int y);
double volume(double length, double width, double breadth);
int max(int a, int b);
int intervalSum(int a, int b);
int  readInteger();
double round(double precission_val, int precission);
void drawPineTree(int height);
double nonNegativeIntPower(double a, int n);
double intPower(double a, int n);
bool isPrime(int n);
int main()
{
	int a = 0, b = 0, sum_of_two = 0, sum_of_interval = 0, max_of_two, set_precission = 0, height = 0, power = 0, n = 0;
	double length, breadth, width, volume_of_prism, precission_double = 0, round_value = 0, powerOfvalue = 0;
/*	cout << "::::::::::Function 1:::::::::::" << endl;
	cout << "Enter Two Numbers To Find Out Their Sum" << endl;
	cin >> a >> b;
	sum_of_two = sum(a, b);
	cout << "Sum Of Two Numbers : " << sum_of_two << endl;
	cout << "::::::::::Function 2:::::::::::" << endl;
	cout << "Enter Length,Width and Breadth To Find Out The Area Of The Prism" << endl;
	cin >> length >> width >> breadth;
	volume_of_prism = volume(length, width, breadth);
	cout << "Volume Of The Prism Is : " << volume_of_prism << endl;
	cout << "::::::::::Function 3:::::::::::" << endl;
	cout << "Enter Two Numbers To Find Out The Maximum Of Those Two" << endl;
	cin >> a >> b;
	max_of_two = max(a, b);
	cout << "Maximum Of  : " << a << "," << b << " Is : " << max_of_two << endl;
	cout << "::::::::::Function 4:::::::::::" << endl;
	cout << "Enter Two Numbers To Find Out The Sum Of All The Numbers Between Them" << endl;
	cin >> a >> b;
	sum_of_interval = intervalSum(a, b);
	cout << "Sum Of The Numbers Between " << a << " and " << b << " Is : " << sum_of_interval << endl;*/
	cout << "::::::::::Function 5:::::::::::" << endl;
	readInteger();
	cout << "::::::::::Function 6:::::::::::" << endl;
	cout << "::::::::::Function 7:::::::::::" << endl;
	cout << "Enter Double Type Value And An Integer To Set Precission" << endl;
	cin >> precission_double >> set_precission;
	round_value = round(precission_double, set_precission);
	cout << round_value << endl;
	cout << "::::::::::Function 8:::::::::::" << endl;
	cout << "Enter height of the pine tree to draw the tree" << endl;
	cin >> height;
	drawPineTree(height);
	cout << "::::::::::Function 9(A):::::::::::" << endl;
	cout << "enter a value and its power to calculate the value" << endl;
	cin >> powerOfvalue >> power;
	powerOfvalue = nonNegativeIntPower(powerOfvalue, power);
	cout << powerOfvalue << endl;
	cout << "::::::::::Function 9(B):::::::::::" << endl;
	cout << "enter a value and its power(-ve) to calculate the value" << endl;
	cin >> powerOfvalue >> power;
	powerOfvalue = intPower(powerOfvalue, power);
	cout << powerOfvalue << endl;
	cout << "::::::::::Function 10:::::::::::" << endl;
	cout << "enter a number to find out whether its prime or not" << endl;
	cin >> n;
	bool result1 = isPrime(n);
	cout << result1 << endl;
	system("pause");
	return 0;
}
int sum(int a, int b) {

	return a + b;

}
double volume(double length, double width, double breadth) {

	return length * width*breadth;

}
int max(int a, int b) {

	if (a > b) {
		return a;
	}
	else
		return b;
}
int intervalSum(int a, int b) {
	int sum = 0;
	for (int i = a + 1; i < b; i++) {
		sum = sum + i;
	}
	return sum;
}
int readInteger() {
	int var;
	do {
		cin.clear();
		cin.ignore(512, '\n');
		cout << "Enter A Valid Integer " << endl;
		cin >> var;
	} while (cin.fail() || cin.peek() != '\n');
	return var;
}
double round(double precission_val, int precission) {
	precission = precission + 1;
	
	return setprecision(precission), precission_val;;
}
void drawPineTree(int height) {
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < height - i; j++)
			cout << " ";
		for (int k = 0; k < (2 * i + 1); k++)
			cout << "*";
		cout << endl;
	}
}
double nonNegativeIntPower(double a, int n) {
	double result = 1;

	for (int i = 1; i <= n; i++) {
		result = result * a;
	}
	return result;
}
double intPower(double a, int n) {
	double result = 1;

	for (int i = n; i < 0; i++) {
		result = result * a;
	}

	
	return float(1 / result);
}
bool isPrime(int n) {
	int count = 0;
	if (n > 0) {
		if (n == 1) {
			return true;
		}
		else {
			for (int i = 1; i <= n; i++) {
				if (n % i == 0) {
					count = count + 1;
				}

			}
			if (count == 2) {
				return true;
			}
			else {
				return false;
			}
		}
	}
}