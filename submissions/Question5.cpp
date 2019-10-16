#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float l, h, w, vol; // Input varriables to read length,height,weidth and to store volume of the rectangular prism.
	cout << "Enter the length,height and width of a rectangular prism" << "\n";
	cin >> l >> h >> w; // Reading the inputs
	vol = l * h*w; // Calculating the Volume
	cout << "The volume of the prism is : " << vol << "\n"; //Displaying the Volume of the Rectangular Prism
	system("pause");
	return 0;
}