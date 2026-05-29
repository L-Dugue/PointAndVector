#ifndef VECTOR2D_H
#define VECTOR2D_H

#include "point.h"
#include <vector>

class Vector2D : public Point2D
{
	private:
		
		double* vectorDir = new double[2]; // Direction of the Vector, clamped between 0 and 1 along both Axis
		int vectorMagnitude = 0;


	public:

		Vector2D(const std::string& _name, int _magnitude, const std::vector<double>& _vecDir, int posX, int posY); // Constuctor
		~Vector2D() override; // Deconstructor

		// Getters
		int GetVectorMagnitude() const;
		double* GetVectorDirection() const;

		// Setters
		void SetVectorMagnitude(int _newMagnitude);
		void SetVectorDirection(const std::vector<double>& _vecDir);

		// Overridden Methods
		void Print2D() const override;
};


#endif // !VECTOR_H

