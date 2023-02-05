
class Point
{
private:
	float xCoord;
	float yCoord;

public:
	Point();					//default constructor
	Point(float x, float y);  //constructor
	void print();				//member function to print values to the console.
	float euclideanDistance(Point& otherPoint);
};