#include "Group.h"


int Group::getSize() {
	return size;
}

void Group::add(Student student) {
	if (size == 0) {
		list = new Student[1];
		list[size] = student;
	}
	else {
		Student* temp = new Student[size + 1];

		for (int i = 0; i < size; i++)
		{
			temp[i] = list[i];
		}

		temp[size] = student;
		delete[] list;
		list = temp;
	}

	size++;
}

void Group::remove(Student student) {
	int index = findFirstIndex(student);
	remove(index);
}

int Group::findFirstIndex(Student student) {

	for (int i = 0; i < size; i++)
	{
		if (list[i].getName() == student.getName()
			&& list[i].getAge() == student.getAge()
			&& list[i].getMark() == student.getMark()) {
			return i;
		}
	}
	return -1;
}

void Group::remove(int index) {
	if (index >= 0 && index < size) {
		Student* temp = new Student[size - 1];

		for (int i = 0, j = 0; i < size; i++)
		{
			if (i != index) {
				temp[j] = list[i];
				j++;
			}
		}

		delete[] list;
		list = temp;
		size--;
	}
}


Student Group::get(int index) {
	if (index >= 0 && index < size) {
		return  list[index];
	}

	return Student();
}
string Group::getInfo() {
	string s = "List of students: ";

	for (int i = 0; i < size; i++)
	{
		s += "\n" + to_string(i + 1) + ") ";
		s += list[i].getInfo();
	}

	return s;
}
