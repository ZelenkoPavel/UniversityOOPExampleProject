#include <iostream>
#include "Figure.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Editor.h"

using namespace std;

int main() {
	Figure* figure = new Circle();

	Circle circle1(0, 0, 4);
	Rectangle rectangle1;
	Rectangle rectangle2(1, 1, 4, 6);

	cout << figure->draw() << endl;

	return 0;
}