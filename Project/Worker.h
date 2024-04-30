#pragma once
#include "Human.h"

using namespace std;

class Worker : public Human
{
private:

	double salary;

public:
	Worker() {
		cout << "default constructor of Worker" << endl;
	}
	/*Worker(string name, int age, double salary) :
		name(name), age(age), salary(salary) {}*/

	~Worker() {}


	double getSalary();
	double setSalary(double salary);

	string getInfo();
};

