#include "Figure.h"


int Figure::getX() {
	return x;
}
int Figure::getY() {
	return y;
}
void Figure::setX(int x) {
	this->x = x;
}
void Figure::setY(int y) {
	this->y = y;
}

virtual string draw() {
	string msg = "start poin x = "
		+ to_string(x) + ", y = " + to_string(y);

	return msg;
}

