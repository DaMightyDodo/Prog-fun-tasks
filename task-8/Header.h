#pragma once
#include <iostream>
#include <vector>
using namespace std;
vector<string> inventory;
int n = 0;
void view()
{
	cout << inventory[slot] << endl;
}
void show_all()
{
	for (int i = 0; i < n; i++)
	{
		cout << inventory[i] << endl;
	}
}