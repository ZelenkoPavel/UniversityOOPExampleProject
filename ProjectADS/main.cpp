#include <iostream>
#include "Queue.h"

using namespace std;

int main() {

	Queue queue;

	queue.enqueue(1);
	queue.enqueue(2);
	queue.enqueue(3);
	queue.enqueue(4);
	queue.enqueue(5);

	cout << queue.getInfo() << endl;

	while (!queue.isEmpty()) {
		cout << queue.dequeue() << " ";
	}

	cout << "\nSize - " << queue.getSize() << endl;

	return 0;
}