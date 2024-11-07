#pragma once
#include <iostream>
using namespace std;
struct Vector2
{
	float x;
	float y;
}Vector2a, Vector2b;

float GetDistanceBetweenPoints(Vector2 Vector2a, Vector2 Vector2b)
{
	return sqrtf(powf(Vector2b.x - Vector2a.x, 2) + powf(Vector2b.y - Vector2a.y, 2));
};


//TODO: Build Vector2 structure
//TODO: Write function to return distance between two Vector2s called GetDistanceBetweenPoints.

//You will need the Euclidean distance formula to complete this task. It is
//given in the article:
//
// - https://en.wikipedia.org/wiki/Euclidean_distance