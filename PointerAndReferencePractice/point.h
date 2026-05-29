#ifndef POINT2D_H
#define POINT2D_H

#include <iostream>
#include <algorithm>

class Point2D 
{

	private:
		int* pointPos = new int[2];
		std::string name;

	public:

		Point2D(const std::string& _name, int posX, int posY); // Constructor
		virtual ~Point2D(); // Deconstructor 

		/// <summary>
		/// Print out Coords and Name of Point
		/// </summary>
		/// <returns></returns>
		virtual void Print2D() const;

		// Getters
		std::string& GetName() const;
		int GetXPos() const;
		int GetYPos() const;

		// Setters
		void SetName(const std::string& newName);
		void SetXPos(const int newX);
		void SetYPos(const int newY);

};

#endif


