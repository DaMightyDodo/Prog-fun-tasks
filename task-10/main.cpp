#include <iostream>
#include <string>
#include <vector>
#include <numeric>
using namespace std;
struct Assessment
{
    vector<string> ComponentName;
    vector<float> ComponentGrade;
    vector<float> Weighting; //multiply with ComponentGrade
}Assessment1,Assessment2;
string CRGBand(float percentage)
{
    if (percentage >= 70) {
        return "FIRST";
    }
    else if (percentage >= 60) {
        return "2.1";
    }
    else if (percentage >= 50) {
        return "2.2";
    }
    else if (percentage >= 40) {
        return "THIRD";
    }
    else {
        return "FAIL";
    }
}
int main()
{
    Assessment1.ComponentName = { "C++ Portfolio", "Reflective Journal" };
    Assessment1.ComponentGrade.resize(Assessment1.ComponentName.size());  //this is better than doing division with bits
    Assessment1.Weighting = { 0.7f,0.3f };
    for (int i = 0; i < Assessment1.ComponentName.size(); i++)
    {
        while (true)
        {
            cout << "Enter grade for " << "Assessment 1 " << Assessment1.ComponentName[i] << ": " << endl;
            cin >> Assessment1.ComponentGrade[i];

            if (cin.fail() || Assessment1.ComponentGrade[i] < 0 || Assessment1.ComponentGrade[i] > 100)
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid" << endl;
            }
            else
            {
                cin.ignore();
                Assessment1.ComponentGrade[i] = Assessment1.ComponentGrade[i] * Assessment1.Weighting[i];
                break;
            }
        }
    }

    float percent1 = accumulate(Assessment1.ComponentGrade.begin(), Assessment1.ComponentGrade.end(), 0.0);
    float weight1 = percent1 * 0.5;
    cout << "Total percent for Assignment 1 is: " << percent1 << "%" << endl;
    cout << "Your CRGBand for Assignment 1: " << CRGBand(percent1) << endl;
    cout << "Your weighting for Assignment 1 is: " << weight1 << "%" << endl;

    Assessment2.ComponentName = { "Game Artefact", "Code Quality and Best Practices", "Programming Techniques" };
    Assessment2.ComponentGrade.resize(Assessment2.ComponentName.size());
    Assessment2.Weighting = { 0.6f,0.2f,0.2f };
    for (int i = 0; i < Assessment2.ComponentName.size(); i++)
    {
        while (true)
        {
            cout << "Enter grade for " << "Assessment 2 " << Assessment2.ComponentName[i] << ": " << endl;
            cin >> Assessment2.ComponentGrade[i];
            if (cin.fail() || Assessment2.ComponentGrade[i] < 0 || Assessment2.ComponentGrade[i] > 100)
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid" << endl;
            }
            else
            {
                cin.ignore();
                Assessment2.ComponentGrade[i] = Assessment2.ComponentGrade[i] * Assessment2.Weighting[i];
                break;
            }
        }
    }
    float percent2 = accumulate(Assessment2.ComponentGrade.begin(), Assessment2.ComponentGrade.end(), 0.0);
    float weight2 = percent2 * 0.5;
    
    cout << "Total percent for Assignment 2 is: " << percent2 << "%" << endl;
    cout << "Your CRGBand for Assignment 2: " << CRGBand(percent2) << endl;
    cout << "Your weighting for Assignment 2 is: " << weight2 << "%\n" << endl;
    float totalWeight = weight1 + weight2;
    cout << "Final weighting for both Assignment is: " << totalWeight << '%' << endl;
    cout << "Your CRGBand for the final project is: " << CRGBand(totalWeight) << endl;
}
//Add code to build a grade calculator for the module. This should:
//
// - Prompt the user for input, for the grade of each component of assessment 1
// - Prompt the user for input, for the grade of each component of assessment 2
// - Provide a detailed breakdown of:
//      - List the overall percentage of each assessment
//      - Their overall grade after percentage weighting
//      - Output which CRG band they fit into, for each criterion

//Invalid input should be detected and handled after prompting. For example,
//if the input grade "-1" is given, the user should be reprompted to enter the
//grade again.

//Furthermore, please use structs and arrays where appropriate to model
//the different assessment components.
//..