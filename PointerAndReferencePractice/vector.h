#ifndef VECTOR2D_H
#define VECTOR2D_H

#include "point.h"
#include <vector>

class Vector2D : public Point2D
{
	private:
		
		int* vectorDir = new int[2]; // Direction of the Vector, clamped between 0 and 1 along both Axis
		int vectorMagnitude = 0;


	public:

		Vector2D(const std::string& _name, int _magnitude, const std::vector<int>& _vecDir, int posX, int posY); // Constuctor
		~Vector2D(); // Deconstructor

		// Getters
		int GetVectorMagnitude() const;
		int GetVectorDirection() const;

		// Setters
		void SetVectorMagnitude(int _newMagnitude);
		void SetVectorDirection(const std::vector<int>& _vecDir);
};


#endif // !VECTOR_H

