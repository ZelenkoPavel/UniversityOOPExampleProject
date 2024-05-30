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
	string msg = "Circle: start poin x = "
		+ to_string(x) + ", y = " + to_string(y)
		+ "; radius = " + to_string(radius);

	return msg;
}