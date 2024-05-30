#include "Rectangle.h"


double Rectangle::getSideA() {
	return a;
}
void  Rectangle::setSideA(double a) {
	if (a > 0) {
		this->a = a;
	}
}

double Rectangle::getSideB() {
	return b;
}
void  Rectangle::setSideB(double b) {
	if (b > 0) {
		this->b = b;
	}
}

double Rectangle::perimeter() {
	return (a + b) * 2;
}
double Rectangle::square() {
	return a * b;
}
string Rectangle::draw() {
	string msg = "Rectangle: start poin x = "
		+ to_string(x) + ", y = " + to_string(y)
		+ "; side A = " + to_string(a) 
		+ "; side B = " + to_string(b);

	return msg;
}