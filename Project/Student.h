#pragma once
#include <iostream>
#include <string>

using namespace std;

class Student {
private:
	string name;
	int age;
	double mark;

public:

	Student();
	Student(string, int, double);
	Student(string);
	Student(double);

	~Student();

	string getName();
	void setName(string);

	int getAge();
	void setAge(int);

	double getMark();
	void setMark(double);

	string convert();

};