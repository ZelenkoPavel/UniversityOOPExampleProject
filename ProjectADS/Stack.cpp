#include "Stack.h"

void Stack::push(int element) {
	if (isEmpty()) {
		stack = new int[1];
		stack[0] = element;
	}
	else {
		int* temp = new int[size + 1];
		for (int i = 0; i < size; i++)
		{
			temp[i] = stack[i];
		}
		temp[size] = element;
		delete[] stack;
		stack = temp;
	}
	size++;
}
int Stack::pop() {
	if (!isEmpty()) {
		int* temp = new int[size - 1];

		for (int i = 0; i < size - 1; i++)
		{
			temp[i] = stack[i];
		}
		int element = stack[size - 1];

		delete[] stack;
		stack = temp;
		size--;

		return element;
	}
	return 0;
}
int Stack::peek() {
	if (!isEmpty()) {
		return stack[size - 1];
	}
	return 0;
}
int Stack::getSize() {
	return size;
}
bool Stack::isEmpty() {
	return size == 0;
}
string Stack::getInfo() {
	string s = "";

	for (int i = size - 1; i >= 0; i--) {
		s += to_string(stack[i]) + " ";
	}

	return s;
}