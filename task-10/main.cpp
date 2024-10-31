#include <iostream>
#include <string>
using namespace std;
struct AssessmentComponent
{
	float grade;
	float weight;
};
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
        return ;
    }
    else {
        return "Fail (Below 40%)";
    }
}
int main()
{
	AssessmentComponent assessment1[10];
	AssessmentComponent assessment2[];
    
	
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