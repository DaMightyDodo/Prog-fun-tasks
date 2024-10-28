#include <iostream>
#include <string>
using namespace std;
void main()
{
	int PlayerChoose = 69;
	struct
	{
		string Name;
		string Class[3] = { "Spearman","Knight","Archer" };
	}PlayerDetail;
	do
	{
		cout << "Choose your character: \n 1. " << PlayerDetail.Class[0] << "\n 2. " << PlayerDetail.Class[1] << "\n 3. " << PlayerDetail.Class[2] << "\n";
		cin >> PlayerChoose;
		cout << "You have selected the " << PlayerDetail.Class[PlayerChoose - 1] << " character class. " << endl;
		return;
	} while (PlayerChoose != sizeof(PlayerDetail.Class) / sizeof(PlayerDetail.Class[0]));
	cout << "\n Traveler, state your name: ";
	cin >> PlayerDetail.Name;
	cout << "Player details:" << endl;
	cout << "- Name: " << PlayerDetail.Name << endl;
	cout << "- Class: " << PlayerDetail.Class[PlayerChoose - 1] << endl;

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