#pragma once
#include "Figure.h"

class Triangle : public Figure
{
protected:
	double a;
	double b;
	double c;
public:
	Triangle() : Figure(), a(1), b(1), c(1) {}
	Triangle(int x, int y, double a, double b, double c)
		: Figure(x, y), a(a), b(b), c(c) {}
	Triangle(double a, double b, double c)
		: a(a), b(b), c(c) {}

	double getSideA();
	void  setSideA(double a);

	double getSideB();
	void  setSideB(double b);

	double getSideC();
	void  setSideC(double c);

	double perimeter() override;
	double square() override;
	string draw() override;

};

