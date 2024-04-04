#pragma once
#include <iostream>
#include <string>

using namespace std;

class Student {
private:


public:
	string name;
	int age;
	double mark;
	// default constructor
	Student() {
		//cout << "calling default constructor" << endl;
		name = "no name";
		age = 5;
		mark = 4;
	}


	// canonical constructor with parameters (arguments)
	Student(string nm, int a, double m) {
		//cout << "calling canonical constructor" << endl;
		name = nm;
		age = a;
		mark = m;
	}

	Student(string nm) {
		//cout << "calling constructor with parameters 1" << endl;
		name = nm;
		age = 0;
		mark = 0;
	}
	Student(double m) {
		//cout << "calling constructor with parameters 2" << endl;
		name = "no name";
		age = 0;
		mark = m;
	}

	////copy-constructor
	//Student(const Student& students) {

	//}

	// destructor (деструктор)
	~Student() {
		//cout << "calling destructor" << endl;
	}

	string convert() {
		string s = "";

		s += "Name: " + name;
		s += ";\nAge " + name + " = " + to_string(age);
		s += ";\nMark = " + to_string(mark) + ".\n";

		return s;
	}
};