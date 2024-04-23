#include "Student.h"
#include "Manager.h"
#include <iostream>

using namespace std;

int main() {
	Group groupA;
	Group groupB;

	Student st1{ "Alex", 16, 9 };
	Student st2{ "Alice", 15, 8 };
	Student st3{ "Pavel", 13, 10 };

	groupA.add(st1);
	groupA.add(st2);
	groupA.add(st3);

	Student st4{ "Kiril", 14, 8 };
	Student st5{ "Matvey", 16, 10 };
	Student st6{ "Alex", 15, 9 };
	Student st7{ "L", 15, 10 };

	groupB.add(st4);
	groupB.add(st5);
	groupB.add(st6);
	groupB.add(st7);

	cout << groupA.getInfo() << endl;
	cout << groupB.getInfo() << endl;

	Manager manager;


	cout << "Avarage mark of A: " << manager.calcAverageMark(groupA) << endl;
	cout << "Avarage mark of B: " << manager.calcAverageMark(groupB) << endl;

	return 0;
}