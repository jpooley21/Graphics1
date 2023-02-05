//Simple example of a function in C++

#include <iostream>	
using namespace std;


// int squareInt(int p);
double quadratic(int a, int b, int c);

void main()
{
	//int x = 2;
	//int y = 0;
	//y = squareInt(x);  
	//cout << "Square of x: " << y << endl;

	int a = 3;
	int b = 4;
	int c = 1;
	double x = quadratic(a, b, c);
	cout << "x = " << x << endl;


}

// int squareInt(int p) // this function takes one parameter - int p
// {                    // it returns an integer 
//	return p * p;
// }

double quadratic(int a, int b, int c)
{
	double squareRoot = sqrt((b * b) - 4 * a * c);
	double x = ((-b)+squareRoot) / (2 * a);
	return x;
	
}

