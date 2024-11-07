#include "main.h"
int main()
{
    float xComponents[2] = { 0.0f, 0.0f };
    float yComponents[2] = { 0.0f, 0.0f };

    for(int i = 0; i < 2; i++)
    {
        cout << "Please enter the X component of vector " << (i + 1) << ": ";
        cin >> xComponents[i];

        cout << "Please enter the Y component of vector " << (i + 1) << ": ";
        cin >> yComponents[i];

        cout << endl;
    }
    Vector2a.x = xComponents[0];
    Vector2a.y = yComponents[0];

    Vector2b.x = xComponents[1];
    Vector2b.y = yComponents[1];

    cout << "(" << Vector2a.x << "," << Vector2a.y << ")" << endl;
    cout << "(" << Vector2b.x << "," << Vector2b.y << ")" << endl;

    cout << "The distance between two points is: "<< GetDistanceBetweenPoints(Vector2a, Vector2b) << endl;

    return 0;
}
//Build a structure in main.h capable of representing a 2D vector called Vector2. Then,
//write a function in main.h called GetDistanceBetweenPoints which:
//
//- Takes two Vector2 instances via parameter
//- Returns the Euclidean distance between the two points, as a float.
//
//Euclidean distance calculation is used throughout games programming, for several
//different purposes. 

//You should then highlight the function working correctly. The code below
//will prompt the user for an X and Y for two vectors.
    //You should then build two Vector2s from the given x and y components, and show
    //the calculated distance between each point.