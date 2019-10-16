#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	/*float principle = 500000;
	cout << "Investment amount (Principle amount is $500,000)" << endl;
	cout << "Duration is 5 Years!!" << endl;
	cout << "Interest rate is 10%(compound interest)" << endl;
	for (int i = 1; i <= 5; i++) {
		principle = principle + principle * 0.1;

	}
	cout << "Total principle with interest is : " << principle << endl;
	cout << "The compound interest for 5 years is : " << principle - 500000 << endl;
	
	system("pause");
		return 0;

*/
	float principle=0,interest_rate;
	int duration;
	float temp = 0;
	cout << "Enter the amount you wish to invest" << endl;
	cin >> principle;
	temp = principle;
	cout << "Enter the Interest rate you are expecting " << endl;
	cin >> interest_rate;
	cout << "Enter the time period in years" << endl;
	cin >> duration;
	for (int i = 1; i <= duration; i++) {
		principle = principle + principle * interest_rate / 100;
	}

			
		
	cout << "Total principle with interest is : " << principle << endl;
	cout << "The compound interest for 5 years is : " << principle - temp << endl;

	system("pause");
	return 0;
}