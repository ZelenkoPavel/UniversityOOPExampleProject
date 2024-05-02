#pragma once
#include "Human.h"

using namespace std;

class Student : public Human
{
private:
	
	double mark;

public:

	Student() : Human("no name", 5), mark(4) {}

	Student(string name, int age, double mark) :
		Human(name, age), mark(mark) {}

	Student(string name) :
		Human(name, 0), mark(0) {}
	Student(double mark) :
		Human("no name", 0), mark(mark) {}

	~Student(){}


	double getMark();
	void setMark(double);

	string getInfo();

};