#include <iostream>
#include "point.h"
#include "vector.h"

using namespace std;

int main()
{
	// Creation of Points
	Vector2D* vector = new Vector2D("Al", 3, std::vector<double> {1, 1}, 0, 0);
	Point2D* point = new Point2D("Felix", 0, 2);

	vector->Print2D();
	point->Print2D();


	return 0;
}