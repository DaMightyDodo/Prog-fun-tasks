#include "main.h"
#include <iostream>
using namespace std;
void main()
{
    int number = random(0, 100);
    int guess = 69420;
    int count = 0;
    cout << "I have generated a random whole number" << endl;
    cout << "Guess the number from 0-100: ";
    while (guess != number)
    {
        cin >> guess;
        if (guess < 0 || guess > 100)
        {
            cout << "out of range, try again: ";
            continue;
        }
        if (guess + 50 <= number || guess - 50 >= number)
        {
            cout << "\nFreezing" << endl;
            cout << "Guess again: ";
            count++;
        }
        else if (guess + 35 <= number || guess - 35 >= number)
        {
            cout << "\nColder" << endl;
            cout << "Guess again: ";
            count++;
        }
        else if (guess + 25 <= number || guess - 25 >= number)
        {
            cout << "\nCold" << endl;
            cout << "Guess again: ";
            count++;
        }
        else if (guess + 15 <= number || guess - 15 >= number)
        {
            cout << "\nWarm" << endl;
            cout << "Guess again: ";
            count++;
        }
        else if (guess + 5 <= number || guess - 5 >= number)
        {
            cout << "\nHot" << endl;
            cout << "Guess again: ";
            count++;
        }
        else if (guess + 2 <= number || guess - 2 >= number)
        {
            cout << "\nBoiling" << endl;
            cout << "Guess again: ";
            count++;
        }
        else if (guess + 1 <= number || guess - 1 >= number)
        {
            cout << "\nBoiling" << endl;
            cout << "Guess again: ";
            count++;
        }


    }
    count++;
    if (count == 1)
    {
        cout << "You are on FIRE!! You've guessed correctly first try!!!";
    }
    else
    {
        cout << "Congrats! You guessed it in " << count << " tries!!";
    }

}
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
