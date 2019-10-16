#include "pch.h"
#include <iostream>
#include <string>
#include<algorithm> 

using namespace std;


int main()

{
	string names,name="";
	double height, weight, age,max1=0,min1=0;
	double team1_max_height, team2_max_height, team1_min_height, team2_min_height, team1_max_age, team2_max_age, team1_min_age, team2_min_age, team1_max_weight, team2_max_weight, team1_min_weight, team2_min_weight;
	double tallest_player, old_person,heavy_person;
	double team1_avg_height, team2_avg_height, team1_avg_weight, team2_avg_weight, team1_avg_age, team2_avg_age;
	string team1_names[3] =  {"", "", "" };
	double team1_height[3] = { 0,0,0 };
	double team1_weight[3] = { 0,0,0};
	double team1_age[3] = { 0,0,0};
	string team2_names[3] = { "", "", "" };
	double team2_height[3] = { 0,0,0 };
	double team2_weight[3] = { 0,0,0 };
	double team2_age[3] = { 0,0,0 };
	cout << "enter 3 players names " << endl;
	for (int i = 0; i < 3; i++) {
		
		cin >> names;
			 team1_names[i]= names;
		}
	cout << "enter 3 players height respectively " << endl;
	for (int i = 0; i < 3; i++) {

		cin >> height;
		team1_height[i] = height;
	}
	cout << "enter 3 players weight respectively " << endl;
	for (int i = 0; i < 3; i++) {

		cin >> weight;
		team1_weight[i] = weight;
	}
	cout << "enter 3 players age respectively " << endl;
	for (int i = 0; i < 3; i++) {

		cin >> age;
		team1_age[i] = age;
	}
	cout << "enter 2nd team players names " << endl;
	for (int i = 0; i < 3; i++) {

		cin >> names;
		team2_names[i] = names;
	}
	cout << "enter 3 players height respectively " << endl;
	for (int i = 0; i < 3; i++) {

		cin >> height;
		team2_height[i] = height;
	}
	cout << "enter 3 players weight respectively " << endl;
	for (int i = 0; i < 3; i++) {

		cin >> weight;
		team2_weight[i] = weight;
	}
	cout << "enter 3 players age respectively " << endl;
	for (int i = 0; i < 3; i++) {

		cin >> age;
		team2_age[i] = age;
	}
	
	cout << "enter the name of the player to findout his/her height,weight and age" << endl;
	cin >> name;
	for (int i = 0; i < 3; i++) {
		if (team1_names[i] == name) {
			cout << "height is : "<<team1_height[i] << endl;
			cout << "weight is : " << team1_weight[i] << endl;
			cout << "age is : " << team1_age[i] << endl;
		}
		else if (team2_names[i] == name) {
			cout << "height is : " << team2_height[i] << endl;
			cout << "weight is : " << team2_weight[i] << endl;
			cout << "age is : " << team2_age[i] << endl;
		}
	}



	//team1_avg_height, team2_avg_height, team1_avg_weight, team2_avg_weight, team1_avg_age, team2_avg_age
	team1_avg_height = (team1_height[1] + team1_height[2] + team1_height[3]) / 3;
	team2_avg_height = (team2_height[1] + team2_height[2] + team2_height[3]) / 3;
	team1_avg_weight = (team1_weight[1] + team1_weight[2] + team1_weight[3]) / 3;
	team2_avg_weight = (team2_weight[1] + team2_weight[2] + team2_weight[3]) / 3;
	team1_avg_age = (team1_age[1] + team1_age[2] + team1_age[3]) / 3;
	team2_avg_age = (team2_age[1] + team2_age[2] + team2_age[3]) / 3;
	cout << "average age of the team 1 is : " << team1_avg_age << endl;
	cout << "average age of the team 2 is : " << team2_avg_age << endl;
	cout << "average weight of the team 1 is : " << team1_avg_weight << endl;
	cout << "average weight of the team 2 is : " << team2_avg_weight << endl;
	cout << "average height of the team 1 is : " << team1_avg_height << endl;
	cout << "average height of the team 2 is : " << team2_avg_height << endl;
	cout << "The Average height of the league is " << (team1_height[1] + team1_height[2] + team1_height[3] + team2_height[1] + team2_height[2] + team2_height[3]) / 6 << endl;
	cout << "The Average weight of the league is " << (team1_weight[1] + team1_weight[2] + team1_weight[3] + team2_weight[1] + team2_weight[2] + team2_weight[3]) / 6 << endl;
	cout << "The Average age of the league is " << (team1_age[1] + team1_age[2] + team1_age[3] + team2_age[1] + team2_age[2] + team2_age[3]) / 6 << endl;
	max1=max(team1_age[1], team1_age[2]);
	team1_max_age = max(max1, team1_age[2]);
	min1 = min(team1_age[1], team1_age[2]);
	team1_min_age = min(min1, team1_age[2]);
	cout << "MAX and MIN AGES of TEAM1" << team1_max_age << " " << team1_min_age  <<" correspondigly "<<endl;
	max1 = max(team1_height[1], team1_height[2]);
	team1_max_height = max(max1, team1_height[2]);
	min1 = min(team1_height[1], team1_height[2]);
	team1_min_height = min(min1, team1_height[2]);
	cout << "MAX and MIN Heights of TEAM1" << team1_max_height << " " << team1_min_height << " correspondigly " << endl;
	max1 = max(team1_weight[1], team1_weight[2]);
	team1_max_weight = max(max1, team1_weight[2]);
	min1 = min(team1_weight[1], team1_weight[2]);
	team1_min_weight = min(min1, team1_weight[2]);
	cout << "MAX and MIN weights of TEAM1" << team1_max_weight << " " << team1_min_weight << " correspondigly " << endl;

	





	old_person = max(team1_max_age, team2_max_age);
	tallest_player = max(team1_max_height, team2_max_height);
	heavy_person = max(team1_max_weight, team2_max_weight);


	max1 = max(team2_age[1], team2_age[2]);
	team2_max_age = max(max1, team2_age[2]);
	min1 = min(team2_age[1], team2_age[2]);
	team2_min_age = min(min1, team2_age[2]);
	cout << "MAX and MIN AGES of TEAM2" << team2_max_age << " " << team2_min_age << " correspondigly " << endl;
	max1 = max(team2_height[1], team2_height[2]);
	team2_max_height = max(max1, team2_height[2]);
	min1 = min(team2_height[1], team2_height[2]);
	team2_min_height = min(min1, team2_height[2]);
	cout << "MAX and MIN Heights of TEAM2" << team2_max_height << " " << team2_min_height << " correspondigly " << endl;
	max1 = max(team2_weight[1], team2_weight[2]);
	team2_max_weight = max(max1, team2_weight[2]);
	min1 = min(team2_weight[1], team2_weight[2]);
	team2_min_weight = min(min1, team2_weight[2]);
	cout << "MAX and MIN weights of TEAM2" << team2_max_weight << " " << team2_min_weight << " correspondigly " << endl;

	cout << "Max weight and Min age's in the league are " << max(team1_max_age, team2_max_age) << " , " << min(team1_min_age, team2_min_age) << endl;
	cout << "Max height and Min hegiht in the league are " << max(team1_max_height, team2_max_height) << " , " << min(team1_min_height, team2_min_height) << endl;
	cout << "Max age and Min weight in the league are " << max(team1_max_weight, team2_max_weight) << " , " << min(team1_min_weight, team2_min_weight) << endl;


	if (team1_avg_height > team2_avg_height) {
		for (int i = 0; i <= 3; i++) {
			if (team1_height[i] == tallest_player) {
				cout << "The tallest player in the league is belongs to the team (TEAM 1) which has the maximum average height" << endl;
			}
		}
	}
	else if (team2_avg_height > team1_avg_height) {
		for (int i = 0; i <= 3; i++) {
			if (team2_height[i] == tallest_player) {
				cout << "The tallest player in the league is belongs to the team (TEAM 2) which has the maximum average height" << endl;
			}
		}
	}
	else {
		cout << "The tallest player in the league doesn't belongs to the team which has the maximum average height" << endl;
	}




	if (team1_avg_weight > team2_avg_weight) {
		for (int i = 0; i <= 3; i++) {
			if (team1_weight[i] == heavy_person) {
				cout << "The heavy player in the league is belongs to the team (TEAM 1) which has the maximum average weight" << endl;
			}
		}
	}
	else if (team2_avg_weight > team1_avg_weight) {
		for (int i = 0; i <= 3; i++) {
			if (team2_weight[i] == heavy_person) {
				cout << "The heavy player in the league is belongs to the team (TEAM 2) which has the maximum average weight" << endl;
			}
		}
	}
	else {
		cout << "The heavy player in the league doesn't belongs to the team which has the maximum average weight" << endl;
	}






	if (team1_avg_age > team2_avg_age) {
		for (int i = 0; i <= 3; i++) {
			if (team1_age[i] == old_person) {
				cout << "The oldest player in the league is belongs to the team (TEAM 1) which has the maximum average age" << endl;
			}
		}
	}
	else if (team2_avg_age > team1_avg_age) {
		for (int i = 0; i <= 3; i++) {
			if (team2_age[i] == old_person) {
				cout << "The oldest player in the league is belongs to the team (TEAM 2) which has the maximum average age" << endl;
			}
		}
	}
	else {
		cout << "The oldest player in the league doesn't belongs to the team which has the maximum average age" << endl;
	}
	system("pasue");
	return 0;

}
