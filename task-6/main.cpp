#include "main.h"
using namespace std;
int main() {
    int number = random(0, 100);
    float guess = 420;
    int count = 0;
    int range[] = { 2, 5, 10, 15, 25, 35, 50 };
    string feedback[] = { "Boiling", "Hot","Warmer","Warm","Cold","Colder","Freezing" };

    cout << "I have generated a random whole number." << endl;
    cout << "Guess the number from 0-100: ";
    while (guess != number)
    {
        cin >> guess;
        if (cin.fail() || guess < 0 || guess > 100) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input/out of range, try again: ";
            continue;
        }
        count++;
        int difference = abs(guess - number);
        if (difference == 0)
        {
            break;
        }
        for (int i = 0; i < sizeof(range) / sizeof(range[0]); i++)
        {
            if (difference <= range[i])
            {
                cout << "\n" << feedback[i] << endl;
                break;
            }
        }
        if (difference > 50)
        {
            cout << "Freezing" << endl;
        }
        cout << "Guess again: ";
    }

    if (count == 1)
    {
        cout << "You are on FIRE!! You've guessed correctly first try!!!" << endl;
    }
    else
    {
        cout << "Congrats! You guessed it in " << count << " tries!!" << endl;
    }
    return 0;
}

//int main() {
//    int number = random(0, 100);
//    float guess = 420;
//    int count = 0;
//
//    cout << "I have generated a random whole number." << endl;
//    cout << number << endl;
//    cout << "Guess the number from 0-100: ";
//
//    int ranges[] = { 2, 5, 10, 15, 25, 35, 50 };
//    string hints[] = { "Boiling", "Hot","Warmer","Warm","Cold","Colder","Freezing"};
//    while (guess != number) {
//        cin >> guess;
//
//        if (cin.fail() || guess < 0 || guess > 100) {
//            cin.clear();
//            cin.ignore(numeric_limits<streamsize>::max(), '\n');
//            cout << "Invalid input/out of range, try again: ";
//            continue;
//        }
//        count++;
//
//        int difference = abs(guess - number);
//        if (difference == 0)
//        {
//            break;
//        }
//        else if (difference <= 2)
//        {
//            cout << "\nBoiling" << endl;
//        }
//        else if (difference <= 5)
//        {
//            cout << "\nHot" << endl;
//        }
//        else if (difference <= 10)
//        {
//            cout << "\nWarmer" << endl;
//        }
//        else if (difference <= 15)
//        {
//            cout << "\nWarm" << endl;
//        }
//        else if (difference <= 25)
//        {
//            cout << "\nCold" << endl;
//        }
//        else if (difference <= 35)
//        {
//            cout << "\nColder" << endl;
//        }
//        else
//        {
//            cout << "\nFreezing" << endl;
//        }
//
//        cout << "Guess again: ";
//    }
//
//    if (count == 1)
//    {
//        cout << "You are on FIRE!! You've guessed correctly first try!!!" << endl;
//    }
//    else 
//    {
//        cout << "Congrats! You guessed it in " << count << " tries!!" << endl;
//    }
//    return 0;
//}
    //The code in this file has been produced to show you how to seed
    //a random number generator, and use it. In main.h, we are using
    //C++'s <random> library to generate random numbers.

    //This can be done with srand() and rand(), but we have opted for
    //using a modern C++ approach. It gives you much more control
    //over the random numbers generated.

    //-----------
    //Expand the current solution to build a random number guessing game.
    //The game should produce a random number between 0-100, and ask users
    //for their guess. Based on their guess, the game should:

    //- Say "freezing" if the number is plus or minus 50 from the guess.
    //- Say "colder" if the number is plus or minus 35 from the guess.
    //- Say "cold" if the number is plus or minus 25 from the guess.
    //- Say "warm" if the number is plus or minus 15 from the guess.
    //- Say "warmer" if the number is plus or minus 10 from the guess.
    //- Say "hot" if the number is plus or minus 5 from the guess.
    //- Say "boiling" if the number is plus or minus 2 from the guess.

    //Once the user has submitted a guess, the program should show them
    //one of these strings and prompt them for another guess.

    //Alternatively, if the guess is correct, a success message should be shown,
    //telling the player they have won.

    //At the end of the program, it should also display the number of guesses
    //the player needed to guess the value in.     