//using the stl vector.

//This example does not include examinable material. 

//to use the commented section you must add point2d.h to the headers of your project
//and point2d.cpp to the source files for your project.

#include "Point2D.h"

#include <iostream>	
using namespace std;

#include <vector>

void main()
{
	vector<int> aVector;

	aVector.push_back(1);
	aVector.push_back(2);
	aVector.push_back(3);

	for(int i=0; i<aVector.size(); i++)
	{
		cout << aVector.at(i) << " " << aVector[i] << endl;
	}

    //in practice it is better to use iterators since iterators 
	//work with STL containers so you can change your container without it affecting everything
	//Iterators used to be a bit more efficient.
	cout << "Now lets print using an interator to move through the vector..." << endl;
	for(vector<int>::iterator myIterator=aVector.begin(); myIterator != aVector.end(); myIterator++)
	{
		cout << *myIterator  << endl;
	}

	cout << "\n\nNow using range loop..." << endl;
	for (auto elementInVector : aVector)
	{
		cout << elementInVector << endl;
	}


	aVector.clear();

	cout << "\n Vector of Point2D " << endl;

	vector<Point2D> bVector;
	bVector.push_back(Point2D(1,2));
	bVector.push_back(Point2D(3,4));
	bVector.push_back(Point2D(5,6));

	for(int i=0; i<bVector.size(); i++)
	{
		bVector.at(i).print();
	}
}
