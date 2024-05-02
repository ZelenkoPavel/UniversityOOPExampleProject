#include "Student.h"
#include "Professor.h"
#include "Manager.h"
#include "Worker.h"
#include "Human.h"
#include <iostream>

using namespace std;

int main() {
	Worker human;

	human.id = 100;
	cout << human.id << endl;


	return 0;
}