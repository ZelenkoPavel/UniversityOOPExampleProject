#pragma once
#include "Figure.h"

class Rectangle : public Figure
{
protected:
	double a;
	double b;
	
public:
	Rectangle() : Figure(), a(1), b(1) {}
	Rectangle(int x, int y, double a, double b)
		: Figure(x, y), a(a), b(b) {}

	double getSideA();
	void  setSideA(double a);

	double getSideB();
	void  setSideB(double b);

	double perimeter() override;
	double square() override;
	string draw() override;

};

