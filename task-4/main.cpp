#include <iostream>
#include <string>
using namespace std;

void PrintBorder(int length) {
    for (int i = 0; i < length; i++) {
        cout << "*";
    }
    cout << endl;
}

void MakeBox(const string& text) {
    int count_characters = text.length() + 4;

    PrintBorder(count_characters);  // Top border

    cout << "* " << text << " *" << endl;  // Text and side borders

    PrintBorder(count_characters);  // Bottom border
}

int main() {
    string text;
    cout << "Please input your wall of text: ";
    getline(cin, text);

    MakeBox(text);
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