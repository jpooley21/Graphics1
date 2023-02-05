
// Arrays passed by reference to functions

#include <iostream>	
using namespace std;

void DoubleElements(int x[], int Size);  // prototype functions
void PrintElements(int x[], int Size);
void AddArrays(int x[], int y[], int Size);
void PrintAsterisks(int x[], int Size);

void main()
{
	int anArray[] = {1,2,3,4,5};
	
	PrintElements(anArray, 5);   
	DoubleElements(anArray, 5); 
	PrintElements(anArray, 5);

	int anotherArray[] = { 10,9,8,7,6 };
	AddArrays(anArray, anotherArray, 5);
	PrintElements(anArray, 5);


	int oneMoreArray[] = { 1,2,3,4,5,6 };
	PrintAsterisks(oneMoreArray, 6);
}

void PrintElements(int x[], int Size)
{
	for (int i = 0; i < Size; i++)
	{
		cout << x[i] << " ";
	}
	cout << endl;
}

void DoubleElements(int x[], int Size)  // when arrays are passed to a function they are passed by reference
{
	for(int i=0; i<Size; i++)
	{
		x[i] *= 2;      //each element of the array is multiplied by two
	}
}

void AddArrays(int x[], int y[], int Size)
{
	for (int i = 0; i < Size; i++) 
	{
		x[i] = x[i] + y[i];
	}
}


void PrintAsterisks(int x[], int Size)
{
	for (int i = 0; i < Size; i++)
	{
		for (int j = 0; j < x[i]; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}