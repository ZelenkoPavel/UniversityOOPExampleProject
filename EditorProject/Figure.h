#pragma once
#include <iostream>
#include <string>

using namespace std;

class Figure
{
protected:
	int x;
	int y;
public:
	Figure() : x(0), y(0) {}
	Figure(int x, int y) : x(x), y(y) {}

	int getX();
	int getY();
	void setX(int x);
	void setY(int y);

	string startPoint(int x, int y);

	virtual double perimeter() = 0;
	virtual double square() = 0; 
	virtual string draw() {
		string msg = "start poin x = "
			+ to_string(x) + ", y = " + to_string(y);

		return msg;
	}
};

