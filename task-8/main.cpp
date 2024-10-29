#include <iostream>
#include <string>
#include <vector>
using namespace std;
string item[4] = { "Empty", "Shield","Potion", "Gloves" };
string command;
string slot;
vector<string> inventory;
int n = 0;
int main()
{

	cout << "Please enter inventory size " << endl;
	cin >> n;
	inventory.resize(n);
	inventory[0] = item[0];
	cin.ignore();
	cout << "Inventory size set to " << n << endl;
	cout << "Type an action: ";

	while (true)
	{
		getline(cin, command);
		if (command == "show_all")
		{
			for (int i = 0; i < n; i++)
			{
				cout << inventory[i] << endl;
			}
		}
		if (command == "items")
		{
			for (int i = 0; i < sizeof(item) / sizeof(item[0]) ; i++)
			{
				cout << item[i] << endl;
			}
		}
		if (command.substr(0, 4) == "view")
		{
			slot = command.substr(5);
			cout << inventory[stoi(slot)];
		}
	}
	//inventory.resize(input);
	// for(int i = 0; i < inventory max length; i++
	// inventory[i] = "empty;
	// int inventory[input] = {"empty"};
}



//In this challenge, you should build an inventory system using a dynamically
   //allocated array of structs.

   //There should also be an array of all possible inventory items, so that
   //the user can set inventory slots to one of these values. Each index into this
   //array could be classes as an "item id"


   //The player should be able to:
   //- Specify the size of the inventory (1 - 16 slots)
   //- Type commands to interact with the inventory, like so:
   //  - "view <number>"         -> Prints out details of the inventory slot index specified by number.
   //  - "show_all"              -> Shows all slots in the inventory.
   //  - "set <index> <item_id>" -> Sets the inventory specified by #index to the item #item_id
   //  - "items"                 -> Shows all the items you can possibly set a slot to, along with their ids.
   //  - "exit"                  -> Exits the tool

   //Invalid choices (such as setting or viewing and invalid index) should also be handled. 

   //An example of the commands:
   //  - "view 0"  -> Shows details of the first inventory slot
   //  - "set 0 2" -> Sets the first inventory slot to item id #2

   //-------------

   //An example list of items:
   // - 0: Empty
   // - 1: Shield
   // - 2: Potion
   // - 3: Gloves

   //An example session with these items might look like:

   // Please enter an inventory size: 8
   // > Initialized inventory with 8 slots.
   //
   // > view 0
   //
   // Inventory Slot 0 information:
   // Name: Empty
   //
   // > set 0 2
   // > view 0
   //
   // Inventory Slot 0 information:
   // Name: Potion
   //
   // > items
   // - 0: Empty
   // - 1: Shield
   // - 2: Potion
   // - 3: Gloves
   //
   // > show_all
   //
   // Inventory: 
   // - Slot 0: Potion
   // - Slot 1: Empty
   // - Slot 2: Empty
   // - Slot 3: Empty
   // - Slot 4: Empty
   // - Slot 5: Empty
   // - Slot 6: Empty
   // - Slot 7: Empty
   //
   // > exit