#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double f; // Input to take the temparature in fahrenheit.
	double temp; // Input to store the temparature in degree celsius.
	cout << "Enter  the temparature in F" << "\n"; //Reading the Input
	cin >> f;
	cout << "The temparature in degrees Celsius is" << "\n"; // 

	temp = (f - 32) / 9 * 5; //Converting from Fahrenheit to degree celsius.
	cout << temp << endl;    // Displaying the output.
	system("pause");
	return 0;
}