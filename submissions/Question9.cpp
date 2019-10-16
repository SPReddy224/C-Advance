// Evl1-q1.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double lab, mid, final_exam, final_grade;//Varriables to take inputs and to store the result
	cout << "Enter the marls for lab,mid and final exams " << "\n";
	cin >> lab >> mid >> final_exam; //Reading inputs
	final_grade = lab * 0.40 + mid * 0.25 + final_exam * 0.35; //Calculating the Final Grade
	cout << "The final Grade is : " << final_grade; // Displaying the Final Grade
	system("pause");
	return 0;
}
	