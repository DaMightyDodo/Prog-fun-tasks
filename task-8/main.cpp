#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Item
{
	int ID;
	string name;
};
Item items[6] = { 0, "Empty" , 1, "Red Potion", 2, "Hylian Shield", 3, "NES Power Gloves", 4, "Zweihander", 5, "Hunter Pistol" };
string command;
int slot;
vector<string> inventory;
int n = 0;
int main()
{
	while (true)
	{
		cout << "Please enter inventory size (1-16) " << endl;
		cin >> n;
		if (cin.fail() || n < 1 || n > 16)
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid" << endl;
		}
		else
		{
			for (int i = 0; i < n; i++) 
			{
				inventory.push_back("Empty");
			}
			break;
		}
	}

	cin.ignore();
	cout << "Inventory size set to " << n << endl;
	cout << "view <number>" << endl;
	cout << "show_all" << endl;
	cout << "set <index> <item_id>" << endl;
	cout << "items" << endl;
	cout << "exit" << endl;
	

	while (true)
	{
		cout << "\nType a command: ";
		getline(cin, command);
		if (command == "show_all")
		{
			for (int i = 0; i < n; i++)
			{
				cout << inventory[i] << endl;
			}
		}
		else if (command == "items")
		{
			for (int i = 0; i < sizeof(items) / sizeof(items[0]) ; i++)
			{
				cout << items[i].ID << ". " << items[i].name << endl;
			}
		}
		else if (command.substr(0, 4) == "view")
		{
			slot = stoi(command.substr(5));
			if (slot >= 0 && slot < n)
			{
				cout << inventory[slot];
			}
			else
			{
				cout << "Invalid index" << endl;
			}
		}
		else if (command.substr(0, 3) == "set")
		{
			int spaceIndex = command.find(' ', 4);

			try
			{
				slot = stoi(command.substr(4, spaceIndex - 4));
				int itemId = stoi(command.substr(spaceIndex + 1));
				if (slot >= 0 && slot < n && itemId >= 0 && itemId < (sizeof(items) / sizeof(items[0])))
				{
					inventory[slot] = items[itemId].name;
					cout << "Set slot " << slot << " to " << inventory[slot] << endl;
				}
				else
				{
					cout << "invalid index or item ID" << endl;
				}
			}
			catch (const invalid_argument& e)
			{
				cout << "Please enter a valid number." << endl;
			}
			catch (const out_of_range& e)
			{
				cout << "Input is out of range" << endl;
			}
			catch (...)
			{
				cout << "something unexpected happened. Please enter valid index or item ID" << endl;
			}

		}
		else if (command == "exit")
		{
			break;
		}
		else
		{
			cout << "invalid command" << endl;
		}
	}
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