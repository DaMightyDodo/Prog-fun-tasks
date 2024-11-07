#include <iostream>
#include <string>
#include <limits>
using namespace std;
int main()
{
	int PlayerChoose = 0;
	struct
	{
		string Name;
		int ID[4] = { 1,2,3,4 };
		string Class[4] = {"Spearman","Knight","Archer","Hunter"};
	}PlayerDetail;

	cout << "Choose your character: " << endl;
		for (int i = 0; i < sizeof(PlayerDetail.Class) / sizeof(PlayerDetail.Class[0]); i++)
		{
			cout << PlayerDetail.ID[i] << ". " << PlayerDetail.Class[i] << endl;
		}
	while (true)
	{ 
		cin >> PlayerChoose;
		if (cin.fail() || PlayerChoose < 1 || PlayerChoose > sizeof(PlayerDetail.Class) / sizeof(PlayerDetail.Class[0]))
		{
			cout << "Invalid input, try again: " << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else 
		{
			break;
		}
	}
	cout << "You have selected the " << PlayerDetail.Class[PlayerChoose - 1] << " character class. " << endl;
	cout << "\n Traveler, state your name: ";
	cin >> PlayerDetail.Name;
	cout << "Player details:" << endl;
	cout << "- Name: " << PlayerDetail.Name << endl;
	cout << "- Class: " << PlayerDetail.Class[PlayerChoose - 1] << endl;
	return 0;
}
//Using structs and arrays, build a character class and name selection system
   //for a text-based game. The program should firstly prompt the user for a class
   //using a numbered menu system. For example:

   // Please choose a character class below:
   // 1. Spearman
   // 2. Knight
   // 3. Archer
   //
   // > 3
   // - You have selected the Archer character class.

   //The character class names and amount are up to you, but should make 
   //use of an array so the solution can be easily extended. Invalid menu choices
   //should also be handled.

   //The user should then be prompted for their in-game name, and then their
   //player details should be shown. These details should be stored in a struct,
   //so player details can be a) easily extended to encompass more player detail
   //types in the future and b) logically exist in one structure.

   //The prompt should be shown like below:

   // Please enter your name: ben
   //
   // Player details:
   // - Name: ben
   // - Class: Knight