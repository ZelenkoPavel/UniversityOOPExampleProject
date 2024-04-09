#include "Student.h"


Student::Student() {
	name = "no name";
	age = 5;
	mark = 4;
}
Student::Student(string nm, int a, double m) {
	name = nm;
	age = a;
	mark = m;
}
Student::Student(string nm) {
	name = nm;
	age = 0;
	mark = 0;
}
Student::Student(double m) {
	name = "no name";
	age = 0;
	mark = m;
}


Student::~Student() {
	
}


string Student::getName() {
	return name;
}
void Student::setName(string nm) {
	name = nm;
}
int Student::getAge() {
	return age;
}
void Student::setAge(int a) {
	if (a > 0 && a < 90) {
		age = a;
	}
}
double Student::getMark() {
	return mark;
}
void Student::setMark(double m) {
	if (m > 0 && m <= 10) {
		mark = m;
	}
}


string Student::convert() {
	string s = "";

	s += "Name: " + name;
	s += ";\nAge " + name + " = " + to_string(age);
	s += ";\nMark = " + to_string(mark) + ".\n";

	return s;
}