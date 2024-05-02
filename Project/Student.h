#pragma once
#include "Human.h"

using namespace std;

class Student : public Human
{
private:
	
	double mark;

public:

	Student() {}

	~Student(){}


	double getMark();
	void setMark(double);

	string getInfo();

};