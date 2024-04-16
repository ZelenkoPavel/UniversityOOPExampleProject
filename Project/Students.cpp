#include "Student.h"



string Student::getName() {
	return name;
}
void Student::setName(string name) {
	this->name = name;
}
int Student::getAge() {
	return age;
}
void Student::setAge(int age) {
	if (age > 0 && age < 90) {
		this->age = age;
	}
}
double Student::getMark() {
	return mark;
}
void Student::setMark(double mark) {
	if (mark > 0 && mark <= 10) {
		this->mark = mark;
	}
}


string Student::convert() {
	string s = "";

	s += "Name: " + name;
	s += ";\nAge " + name + " = " + to_string(age);
	s += ";\nMark = " + to_string(mark) + ".\n";

	return s;
}