#include "Triangle.h"
#include <math.h>


double Triangle::getSideA() {
	return a;
}
void  Triangle::setSideA(double a) {
	if (a > 0) {
		this->a = a;
	}
}

double Triangle::getSideB() {
	return b;
}
void  Triangle::setSideB(double b) {
	if (b > 0) {
		this->b = b;
	}
}

double Triangle::getSideC() {
	return c;
}
void  Triangle::setSideC(double c) {
	if (c > 0) {
		this->c = c;
	}
}

double Triangle::perimeter() {
	return a + b + c;
}
double Triangle::square() {
	double p = perimeter() / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

string Triangle::draw() {
	string msg = "Rectangle: " + Figure::draw()
		+ ";\nside A = " + to_string(a)
		+ ";\nside B = " + to_string(b)
		+ ";\nside C = " + to_string(c);

	return msg;
}