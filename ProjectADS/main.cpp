#include <iostream>
#include "Queue.h"
#include "Stack.h"

using namespace std;

int main() {

	Stack stack;

	stack.push(1);
	stack.push(2);
	stack.push(3);
	stack.push(4);
	stack.push(5);

	cout << stack.getInfo() << endl;

	cout << "Size - " << stack.getSize() << endl;

	while (!stack.isEmpty()) {
		cout << stack.pop() << " ";
	}

	cout << "\nSize - " << stack.getSize() << endl;

	return 0;
}