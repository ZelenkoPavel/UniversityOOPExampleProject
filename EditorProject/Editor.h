#pragma once
#include <iostream>
#include "Figure.h"

using namespace std;

class Editor
{

public:
	string justDolt(Figure* figure) {
		string msg = "";

		msg += figure->draw();
		msg += "; perimeyer = " + to_string(figure->perimeter());
		msg += "; square = " + to_string(figure->square());

		return msg;
	}
};

