#include <iostream>
using namespace std;
void main()
{
    string name;
    int age;
    string clantag;
    string username;
    cout << "Enter your name: ";
    cin >> name;
    cout << "\nEnter your clantag: ";
    cin >> clantag;
    cout << "\nEnter your age: ";
    cin >> age;
    cout << "\nEnter your username: ";
    cin >> username;
    cout << "\nHello " << name << "!";
    cout << "\nName: " << name;
    cout << "\nUsername: [" << clantag << "]" << username;
    cout << "\nAge: " << age;
}
//Add code to prompt the player for their name, and then
  //greet them with that name. For example, 
  //
  // Please enter your name: ben
  // Hello ben!
  //

  //Expand this so the player is asked for their name, clan tag,
  //age and username. Print out these details like so:
  //
  // - Name: <name>
  // - Username: [<clantag>]<username>
  // - Age: <age>
  //
