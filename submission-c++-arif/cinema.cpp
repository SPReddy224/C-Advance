/*#include <iostream> 
using namespace std;
int main()
{
	int age;
	cout << " please enter your age" << endl;
	cin >> age;
	int day;
	cout << " please enter the value of day" << endl;
	cin >> day;
	float baseprice = 9, price;


	if (age < 16 || age >= 65)
	{

		switch (day)
		{
		case 0:
			price = baseprice - (baseprice * 10 / 100);
			cout << "the price of ticket is " << price << endl;
			break;
		case 1:
			price = (baseprice - (baseprice * 30 / 100));
			cout << "the price of ticket is " << price << endl;
			break;
		case 2:
			price = baseprice - (baseprice * 30 / 100);
			cout << "the price of ticket is " << price << endl;
			break;
		case 3:
			price = baseprice - (baseprice * 30 / 100);
			cout << "the price of ticket is " << price << endl;
			break;
		case 4:
			price = baseprice - (baseprice * 10 / 100);
			cout << "the price of ticket is " << price << endl;
			break;
		default:
			cout << "enter a valid choice" << endl;
			break;
		}
	}
	else if (age > 16 || age <= 65)
	{

		switch (day)
		{
		case 1:
			price = baseprice - (baseprice * 20 / 100);
			cout << "the price of ticket is " << price << endl;
			break;
		case 2:
			price = baseprice - (baseprice * 20 / 100);
			cout <<"the price of ticket is "<< price << endl;
			break;
		default:
			cout << "enter a valid choice" << endl;
			break;

			return 0;
		}
	}
	system("pause");
}*/
