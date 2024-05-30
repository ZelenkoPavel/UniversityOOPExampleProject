#include "Editor.h"

string justDolt(Figure* figure) {
	string msg = "";

	msg += figure->draw();
	msg += "; perimeyer = " + to_string(figure->perimeter());
	msg += "; square = " + to_string(figure->square());

	return msg;
}