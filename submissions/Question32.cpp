#include "pch.h"
#include <iostream>
#include <time.h>
#include <iomanip>
#include<algorithm> 
using namespace std;

int main()
{
	double score_1 = 0, score_2 = 0, score_3 = 0, score_4 = 0, score_5 = 0, score_6 = 0;
	double max = 0, min = 0, score = 0;
	double temp1 = 0, temp2 = 0, temp3 = 0, temp4 = 0,temp5=0;
	cout << "Enter Scores " << endl;
	cin >> score_1 >> score_2 >> score_3 >> score_4 >> score_5 >> score_6;

	score = score_1 + score_2 + score_3 + score_4 + score_5 + score_6;

	temp1 = std::max(score_1, score_2);
	temp2 = std::max(score_3, score_4);
	temp3 = std::max(score_5, score_6);
	temp4 = std::max(temp1, temp2);
	max = std::max(temp4, temp3);
	temp1 = std::min(score_1, score_2);
	temp2 = std::min(score_3, score_4);
	temp3 = std::min(score_5, score_6);
	temp4 = std::min(temp1, temp2);
	min = std::min(temp4, temp3);
	score = (score - max - min)/4;
	cout << "The Average Score Is : " << score << endl;


	/*if (score_1 > score_2 && score_1 > score_3 && score_1 > score_4 && score_1 > score_5 && score_1 > score_6) {
		max = score_1;
		score = score_2 + score_3 + score_4 + score_5 + score_6;
	}
	else if (score_2 > score_1 && score_2 > score_3 && score_2 > score_4 && score_2 > score_5 && score_2 > score_6) {
		max = score_2;
		score = score_1 + score_3 + score_4 + score_5 + score_6;
	}
	else if (score_3 > score_1 && score_3 > score_2 && score_3 > score_4 && score_3 > score_5&& score_3 > score_6) {
		max = score_3;
		score = score_1 + score_2 + score_4 + score_5 + score_6;
	}
	else if (score_4 > score_1 && score_4 > score_2 && score_4 > score_3 && score_4 > score_5 && score_4 > score_6) {
		max = score_4;
		score = score_1 + score_2 + score_3 + score_5 + score_6;
	}
	else if (score_5 > score_1 && score_5 > score_2 && score_5 > score_3 && score_5 > score_4 && score_5 > score_6) {
		max = score_5;
		score = score_1 + score_2 + score_3 + score_4 + score_6;
	}
	else {
		max = score_6;
		score = score_1 + score_2 + score_3 + score_4 + score_5;
	}


	if (score_1 < score_2 && score_1 < score_3 && score_1 < score_4 && score_1 < score_5 && score_1 < score_6) {
		min = score_1;
		score = score - min;
	}
	else if (score_2 < score_1 && score_2 < score_3 && score_2 < score_4 && score_2 < score_5 && score_2 < score_6) {
		min = score_2;
		score = score - min;
	}
	else if (score_3 < score_1 && score_3 < score_2 && score_3 < score_4 && score_3 < score_5 && score_3 < score_6) {
		min = score_3;
		score = score - min;
	}
	else if (score_4 < score_1 && score_4 < score_2 && score_4 < score_3 && score_4 < score_5 && score_4 < score_6) {
		min = score_4;
		score = score - min;
	}
	else if (score_5 < score_1 && score_5 < score_2 && score_5 < score_3 && score_5 < score_4 && score_1 < score_6) {
		min = score_1;
		score = score - min;
	}
	else {
		min = score_6;
		score = score - min;;
	}
	score = score / 4;
	cout << "The Average Score Is : " << score << endl;*/
	system("pause");
}