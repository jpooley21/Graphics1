
#include <iostream>	 
using namespace std;      

#include "Point.h"

void main()
{
	Point myPoint(3.0, 2.0);
	Point myEmptyPoint;

	myPoint.print();
	myEmptyPoint.print();

	Point euclideanDistance(myEmptyPoint, myPoint);
} 

