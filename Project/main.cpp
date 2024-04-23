#include "Student.h"
#include "Manager.h"
#include <iostream>

using namespace std;

int main() {
	Group groupA;

	Student st1{ "Alex", 16, 9 };
	Student st2{ "Alice", 15, 8 };
	Student st3{ "Pavel", 13, 10 };
	Student st4{ "Kiril", 14, 8 };
	Student st5{ "Matvey", 16, 10 };
	Student st6{ "Alex", 15, 9 };
	Student st7{ "Kira", 17, 10 };

	groupA.add(st1);
	groupA.add(st2);
	groupA.add(st3);
	groupA.add(st4);
	groupA.add(st5);
	groupA.add(st6);
	groupA.add(st7);

	cout << "Before: \n" << groupA.getInfo() << endl << groupA.getSize() << endl;

	groupA.remove(0);
	groupA.remove(st3);

	Student st8{ "L", 17, 10 };

	groupA.add(st8);

	cout << "__________________________________" << endl;
	cout << "After: \n" << groupA.getInfo() << endl << groupA.getSize() << endl;
	return 0;
}