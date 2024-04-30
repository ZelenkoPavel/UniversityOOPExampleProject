#pragma once
#include <iostream>
#include <string>

using namespace std;

class Worker
{
private:
	string name;
	int age;
	double salary;

public:
	Worker() {}
	Worker(string name, int age, double salary) :
		name(name), age(age), salary(salary) {}

	~Worker() {}

	string getName();
	void setName(string name);
	int getAge();
	void setAge(int age);
	double getSalary();
	double setSalary(double salary);

	string getInfo();
};

