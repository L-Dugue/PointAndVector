#include "vector.h"

Vector2D::Vector2D(const std::string& _name, double _magnitude, const std::vector<double>& _vecDir, int posX, int posY)
	: vectorMagnitude(_magnitude), Point2D(_name, posX, posY)
{
	Vector2D::vectorDir[0] = std::clamp(_vecDir[0], -1., 1.);
	Vector2D::vectorDir[1] = std::clamp(_vecDir[1], -1., 1.);
}

Vector2D::~Vector2D()
{
	delete Vector2D::vectorDir;
}

// Getters
double Vector2D::GetVectorMagnitude() const { return Vector2D::vectorMagnitude; }
double* Vector2D::GetVectorDirection() const { return Vector2D::vectorDir; }

// Setters
void Vector2D::SetVectorMagnitude(int _newMagnitude) { Vector2D::vectorMagnitude = _newMagnitude; }
void Vector2D::SetVectorDirection(const std::vector<double>& _vecDir)
{
	Vector2D::vectorDir[0] = std::clamp(_vecDir[0], -1., 1.);
	Vector2D::vectorDir[1] = std::clamp(_vecDir[1], -1., 1.);
}

// Overwritten Methods
void Vector2D::Print2D() const
{
	Point2D::Print2D();
	std::cout << "Vector: {" << Vector2D::GetVectorDirection()[0] * Vector2D::GetVectorMagnitude() << " , " << Vector2D::GetVectorDirection()[1] * Vector2D::GetVectorMagnitude() << "}" << std::endl;
	std::cout << "Vector Direction: {" << Vector2D::GetVectorDirection()[0] << "," << Vector2D::GetVectorDirection()[1] << "}" << std::endl;
	std::cout << "Vector Magnitude: " << Vector2D::GetVectorMagnitude() << std::endl;
	std::cout << std::endl;
}