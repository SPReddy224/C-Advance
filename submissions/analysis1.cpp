

#include<iostream>
using namespace std;
int main()
{
	double distance, speed,time;
	cout << "enter the distance travelled between two cities:";
	cin >> distance;
	cout << "enter the speed travelled by vechile:";
	cin >> speed;
	time = (distance / speed);
	cout << "Time taken to cover"<< distance<<" kms with the speed of "<< speed <<"is"<< time << " hrs" << endl;
	system("pause");
	return 0;
}
