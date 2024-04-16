#include "Student.h"


Student::Student() {
	name = "no name";
	age = 5;
	mark = 4;
}
Student::Student(string name, int age, double mark) {
	this->name = name;
	this->age = age;
	this->mark = mark;
}
Student::Student(string name) {
	this->name = name;
	this->age = 0;
	this->mark = 0;
}
Student::Student(double mark) {
	this->name = "no name";
	this->age = 0;
	this->mark = mark;
}


Student::~Student() {
	
}


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