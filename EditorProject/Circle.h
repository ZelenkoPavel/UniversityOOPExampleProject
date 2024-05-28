#pragma once
#include "Figure.h"

class Circle : public Figure
{
protected:
	double PI = 3.1416;
	double radius;
public:
	Circle() : Figure(), radius(1) {}
	Circle(int x, int y, double radius)
		: Figure(x, y), radius(radius) {}

	double getRadius();
	void setRadius(double radius);

	double perimeter() override;
	double square() override;
	string draw() override;

};

