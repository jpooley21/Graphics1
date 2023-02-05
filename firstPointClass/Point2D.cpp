
#include <iostream>

using namespace std;

#include "Point2D.h"

//default constructor - initialise the members to zero
Point2D::Point2D()
{
	xCoord = 0.0f;
	yCoord = 0.0f;
}

//constructor - set the values of the new Point2D object
Point2D::Point2D(float x, float y)
{
	xCoord = x;
	yCoord = y;
}

//print member function - output the coordinates to the console.
void Point2D::print()
{
	cout << "X:" << xCoord << "  Y:" << yCoord << endl;
}