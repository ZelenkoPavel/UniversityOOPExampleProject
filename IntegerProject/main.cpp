#include <iostream>
#include "Integer.h"

using namespace std;

int main() {
	Integer integer1(7);
	Integer integer2(5);
	Integer integer3(integer1 + integer2);
	Integer integer4(integer1 - integer2);
	Integer integer5(integer1 * (integer2));
	Integer integer6(integer1 / (integer2));
	Integer integer7(integer1 ^ 3);
	Integer integer8(integer1 % integer2);
	Integer integer9(-integer1);

	cout << "add - " << integer3.getValue() << endl;
	cout << "sub - " << integer4.getValue() << endl;
	cout << "mul - " << integer5.getValue() << endl;
	cout << "div - " << integer6.getValue() << endl;
	cout << "power - " << integer7.getValue() << endl;
	cout << "mod - " << integer8.getValue() << endl;
	cout << "opp - " << integer9.getValue() << endl;

	cout << "" << endl;




	return 0;
}
