#include <iostream>
#include <string>
using namespace std;
void MakeBox()
{
    int count_characters;
    string text;
    cout << "Please input your wall of text: ";
    getline(cin, text);
    count_characters = text.length() + 4;
    while (count_characters > 0) //top border
    {
        cout << "*";
        count_characters = count_characters - 1;
    }

    cout << "\n* " << text << " *" << endl; //the text and sideway border

    count_characters = text.length() + 4;
    while (count_characters > 0) //bottom border
    {
        cout << "*";
        count_characters = count_characters - 1;
    }
}
    int main()
    {
        MakeBox();
        return 0;
    }
//For this challenge, produce a program which 
//prompts the user for a string of text. When
//this text is entered, the program should:

//- Automatically generate a box around the text.
//- And show it in the console.

//This is a feature commonly seen in text-based
//adventure games, to show speech bubbles for characters.

//---
//An example session:    

//Please enter some text: blah something
//
// ******************
// * blah something *
// ******************

//Can you also expand this so that the box can be
//shown with some padding? Or turn it into a function?