#pragma once
#include "Human.h"

using namespace std;

class Worker : public Human
{
private:

	double salary;

public:
	Worker() {}

	Worker(string name, int age, double salary) : 
		Human(name, age), salary(salary) {}

	~Worker() {}


	double getSalary();
	void setSalary(double salary);

	string getInfo();
};

