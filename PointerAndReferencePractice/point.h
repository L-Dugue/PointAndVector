#ifndef POINT2D_H
#define POINT2D_H

#include <iostream>

class Point2D 
{

	private:
		int* pointPos = new int[2];
		std::string name;

	public:

		Point2D(const std::string& _name, int posX, int posY); // Constructor

		/// <summary>
		/// Print out Coords and Name of Point
		/// </summary>
		/// <returns></returns>
		const void PrintPoint2D(); 

		/// <summary>
		/// Returns the X pos of the Point
		/// </summary>
		/// <returns></returns>
		const int ReturnPoint2DX();


		/// <summary>
		/// Returns the Y pos of the Point
		/// </summary>
		/// <returns></returns>
		const int ReturnPoint2DY();
		

		// Getters
		const std::string& GetName();
		const int GetXPos();
		const int GetYPos();

		// Setters
		void SetName(const std::string& newName);
		void SetXPos(const int newX);
		void setYPos(const int newY);

};





#endif


