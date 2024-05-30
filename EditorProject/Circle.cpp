#include "Circle.h"


double Circle::getRadius() {
	return radius;
}
void Circle::setRadius(double radius) {
	if (radius > 0) {
		this->radius = radius;
	}
}

double Circle::perimeter() {
	return 2 * PI * radius;
}
double Circle::square() {
	return PI * radius * radius;
}
string Circle::draw() {
	string msg = "Circle: start poin x = " + Figure::draw()
		+ ";\nradius = " + to_string(radius);

	return msg;
}