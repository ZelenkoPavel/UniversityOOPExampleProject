#pragma once
#include <iostream>

using namespace std;

class Student {
public:
	string name;
	int age;
	double mark;


	// default-constructor
	Student() {
		cout << "calling default-constructor" << endl;
	}
};