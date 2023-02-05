
#include <iostream>

using namespace std;

#include "Point.h"

//default constructor - initialise the members to -1
Point::Point()
{
	xCoord = -1.0;
	yCoord = 0.0;
}

//constructor - set the values of the new Point object
Point::Point(float x, float y)
{
	xCoord = x;
	yCoord = y;
}

//print member function - output the coordinates to the console.
void Point::print()
{
	cout << "X:" << xCoord << endl;
	cout << "Y:" << yCoord << endl;
}

float Point::euclideanDistance(Point& otherPoint)
{
	float xDiff = (Point::xCoord - otherPoint.xCoord) * (Point::xCoord - otherPoint.xCoord);
	float yDiff = (Point::yCoord - otherPoint.yCoord) * (Point::yCoord - otherPoint.yCoord);
	float distance = sqrt(xDiff * yDiff);
	cout << "ED = " << distance << endl;
	return distance;
}