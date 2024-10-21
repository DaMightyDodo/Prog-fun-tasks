#pragma once
#include <iostream>
#include <vector>
using namespace std;
vector<string> inventory;
int view()
{
	for (int i = 0; i < 5; i++)
	{
		cout << inventory[i] << "\n";
	}
}