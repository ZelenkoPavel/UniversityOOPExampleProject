#include "Student.h"
#include "Manager.h"
#include <iostream>

using namespace std;

int main() {
	Student st("Alex", 14, 9);

	cout << "Before:\n" << st.convert() << endl;

	//st.age = -10;
	st.setAge(-20);

	cout << "After:\n" << st.convert() << endl;
	
	return 0;
}