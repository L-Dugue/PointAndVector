#include <iostream>
#include "point.h"

using namespace std;

int main()
{
	Point2D* point = new Point2D("Felix", 0, 1);

	point->Print2D();

	point->SetName("Danny");
	point->SetXPos(4);
	point->SetYPos(2);
	point->Print2D();

	return 0;
}