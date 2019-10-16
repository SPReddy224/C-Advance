#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int floors;//Varriable to store number of floors
	int temp;  // Varriable for temporary calculations
	int height; // Varriable to store the height of the building
	cout << "Enter the number of floors ";
	cin >> floors; // Reading the number of floors
	if (floors > 0)//Making sure that the input values is a valid number
	{
		if (floors > 1) { // If the number of floors is more than 1 then adding 6 as the first floor is 6 then multiplying the temp varriable with 4 as all the other floors are height of 4 metres
			temp = floors - 1;
			height = 6 + temp * 4;
			cout <<"The Height of the building is"<< height << " metres "<<endl; // Displying the Height of the building
		}
		else // The building has only one floor
		{
			height = 6;
			cout << height << "metres"<<endl; // Displying the height of the building
		}

	}
	else {
		cout << "enter valid number of floors"<<endl; // if the number if not valid then asking user to enter a valid number 

	}
	system("pause");
	return 0;
}