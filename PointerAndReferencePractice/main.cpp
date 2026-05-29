#include <iostream>
#include "point.h"
#include "vector.h"

using namespace std;

int main()
{
	// Creation of Points
	Vector2D* vector = new Vector2D("Vector 1", 5.3, std::vector<double> {0.2, 0.4}, 0, 0);
	Point2D* point = new Point2D("Point 1", 0, 2);

	vector->Print2D();
	point->Print2D();

	vector->~Vector2D();
	point->~Point2D();


	return 0;
}