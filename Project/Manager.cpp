#include "Manager.h"

double Manager::getMaxMark(Student* students, int length) {
	double max = students[0].getMark();

	for (int i = 1; i < length; i++)
	{
		if (max < students[i].getMark()) {
			max = students[i].getMark();
		}
	}

	return max;
}

double Manager::getMinMark(Student* students, int length) {
	double min = students[0].getMark();

	for (int i = 1; i < length; i++)
	{
		if (min > students[i].getMark()) {
			min = students[i].getMark();
		}
	}

	return min;
}

double Manager::calcAverageMark(Student* students, int length) {
	double average = 0;

	for (int i = 0; i < length; i++)
	{
		average += students[i].getMark();
	}

	return average / length;
}

Student Manager::getBestStudent(Student* students, int length) {
	double bestMark = getMaxMark(students, length);

	Student st = NULL;

	for (int j = 0; j < length; j++)
	{
		if (bestMark == students[j].getMark()) {
			st = students[j];
		}
	}
	return st;
}