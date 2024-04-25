#include "Queue.h"

void Queue::enqueue(int element) {

}
int Queue::dequeue() {
	if (!isEmpty()) {
		//...
		return queue[0];
	}
	return 0;
}
int Queue::peek() {
	if (!isEmpty()) {
		return queue[0];
	}
	return 0;
}
int Queue::getSize() {
	return size;
}
bool Queue::isEmpty() {
	return size == 0;
}