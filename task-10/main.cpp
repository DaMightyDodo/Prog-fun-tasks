#include <iostream>
#include <string>
#include <vector>
#include <numeric>
using namespace std;
struct Assessment
{
    vector<string> ComponentName;
    vector<float> ComponentGrade;
    // maybe no weighting because it's already 50% for both
}Assessment1,Assessment2;
char CRGBand(double percentage)
{
    if (percentage >= 70) {
        return 'A';
    }
    else if (percentage >= 60) {
        return 'B';
    }
    else if (percentage >= 50) {
        return 'C';
    }
    else if (percentage >= 40) {
        return 'D';
    }
    else {
        return 'F';
    }
}
int main()
{
    Assessment1.ComponentName = { "C++ Portfolio", "Reflective Journal" };
    Assessment1.ComponentGrade.resize(Assessment1.ComponentName.size());  //this is better than doing division with bits
    for (int i = 0; i < Assessment1.ComponentName.size(); i++)
    {
        cout << "Enter grade for " << "Assessment 1 " << Assessment1.ComponentName[i] << ": " << endl;
        cin >> Assessment1.ComponentGrade[i];
    }
    float percent1 = accumulate(Assessment1.ComponentGrade.begin(), Assessment1.ComponentGrade.end(), 0.0);
    float weight1 = percent1 * 0.5;

    cout << "Total percent for Ass1 is: " << percent1 << "%" << endl;
    cout << "Your weighting for Ass1 is: " << weight1 << "%" << endl;


    Assessment2.ComponentName = { "Game Artefact", "Code Quality and Best Practices", "Programming Techniques" };
    Assessment2.ComponentGrade.resize(Assessment2.ComponentName.size());
    for (int i = 0; i < Assessment2.ComponentName.size(); i++)
    {
        cout << "Enter grade for " << "Assessment 2 " << Assessment2.ComponentName[i] << ": " << endl;
        cin >> Assessment2.ComponentGrade[i];
    }
    float percent2 = accumulate(Assessment2.ComponentGrade.begin(), Assessment2.ComponentGrade.end(), 0.0);
    float weight2 = percent2 * 0.5;
    
    cout << "Total percent for Ass2 is: " << percent2 << "%" << endl;
    cout << "Your weighting for Ass2 is: " << weight2 << "%\n" << endl;
    float totalWeight = weight1 + weight2;
    cout << "Final weighting for both Ass is: " << totalWeight << '%' << endl;
    cout << "You belong to rank: " << CRGBand(totalWeight) << endl;
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