#include "Editor.h"

string Editor::justDolt(Figure* figure) {
	string msg = "";

	msg += figure->draw();
	msg += ";\nperimeyer = " + to_string(figure->perimeter());
	msg += ";\nsquare = " + to_string(figure->square());

	return msg;
}