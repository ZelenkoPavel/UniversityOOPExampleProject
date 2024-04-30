#include "Student.h"



double Student::getMark() {
	return mark;
}
void Student::setMark(double mark) {
	if (mark > 0 && mark <= 10) {
		this->mark = mark;
	}
}


string Student::getInfo() {
	string s = "";

	s += "Name: " + getName();
	s += ";\nAge " + getName() + " = " + to_string(getAge());
	s += ";\nMark = " + to_string(mark) + ".\n";

	return s;
}