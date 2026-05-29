#include "point.h"

Point2D::Point2D(const std::string& _name, int posX, int posY) : name(_name)
{
	// Set X and Y position
	Point2D::pointPos[0] = posX;
	Point2D::pointPos[1] = posY;
}

Point2D::~Point2D()
{
	delete Point2D::pointPos;
	std::cout << "\nPoint Deleted";
}

// Getters 
int Point2D::GetXPos() const { return Point2D::pointPos[0]; }
int Point2D::GetYPos() const { return Point2D::pointPos[1]; }


// Setters
void Point2D::SetName(const std::string& newName) { Point2D::name = newName; }
void Point2D::SetXPos(const int newX) { Point2D::pointPos[0] = std::clamp(newX, 0, 10); }
void Point2D::SetYPos(const int newY) { Point2D::pointPos[1] = std::clamp(newY, 0, 10); }

// Extra Methods
void Point2D::Print2D() const
{
	std::cout << "Name: " + Point2D::name << std::endl;
	std::cout << "Pos: [" << Point2D::GetXPos() << "," << Point2D::GetYPos() << "]" << std::endl;
}

