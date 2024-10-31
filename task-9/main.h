#pragma once
#include <iostream>
using namespace std;
struct Vector2
{
	float x;
	float y;
};

float GetDistanceBetweenPoints(float x1, float y1, float x2, float y2)
{
	return sqrtf(powf(x2 - x1, 2) + powf(y2 - y1, 2));
};


//TODO: Build Vector2 structure
//TODO: Write function to return distance between two Vector2s called GetDistanceBetweenPoints.

//You will need the Euclidean distance formula to complete this task. It is
//given in the article:
//
// - https://en.wikipedia.org/wiki/Euclidean_distance