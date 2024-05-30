#include <iostream>
#include "Figure.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Editor.h"

using namespace std;

int main() {
	Circle circle1(0, 0, 4);

	Rectangle rectangle2(1, 1, 4, 6);

	Circle* ñircle = new Circle{ circle1 };
	Rectangle* rectangle = new Rectangle{ rectangle2 };

	Editor editor;
	

	cout << editor.justDolt(ñircle) << endl << endl;

	cout << editor.justDolt(rectangle) << endl;

	return 0;
}