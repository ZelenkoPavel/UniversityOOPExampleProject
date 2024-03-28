#include "Student.h"
#include <iostream>

using namespace std;

int main() {
	//int n{ 10 };
	//int n = 10;
	//int array[10]{};

	//for (int i = 0; i < 10; i++)
	//{
	//	cout << array[i] << endl;
	//}

	//Student st1("Alex", 14, 9);
	//Student st2("Alice", 13, 7);
	//Student st3("Potter", 15, 10);
	//Student st4;
	//Student st5{};
	//Student st6{"Peter"};
	//Student st7{ "Anna", 13, 7};
	////Student st8{ "Anna", 13};  // !!! Compiler Error
	//Student st9 = Student("Alice");

	const int size = 5;
	Student students[size]{ {"Alice"}, {10}, {"Peter", 14, 9}, {"Peter"}, {9}};


	//cout << st1.convert() << endl;
	//cout << st2.convert() << endl;
	//cout << st3.convert() << endl;
	//cout << st4.convert() << endl;
	//cout << st5.convert() << endl;
	//cout << st6.convert() << endl;
	//cout << st7.convert() << endl;
	////cout << st8.convert() << endl;

	return 0;
}