#pragma once
class Queue
{
private:
	int* queue;
	int size{ 0 };

public:
	void enqueue(int element);
	int dequeue();
	int peek();
	int getSize();
	bool isEmpty();

};

