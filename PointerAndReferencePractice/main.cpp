#include <iostream>
#include "point.h"

using namespace std;

int main()
{
	// Creation of Points
	Point2D* point = new Point2D("Felix", 0, 1);
	Point2D* point2 = new Point2D("Alex", 1, 3);
	
	// Print out Info of Points
	point->Print2D();
	point2->Print2D();

	// Deconstruct Points
	point->~Point2D();
	point2->~Point2D();


	return 0;
}