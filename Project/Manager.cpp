#include "Manager.h"

double Manager::getMaxMark(Group group) {
	double max = group.get(0).getMark();

	for (int i = 1; i < group.getSize(); i++)
	{
		if (max < group.get(i).getMark()) {
			max = group.get(i).getMark();
		}
	}

	return max;
}

double Manager::getMinMark(Group group) {
	double min = group.get(0).getMark();

	for (int i = 1; i < group.getSize(); i++)
	{
		if (min > group.get(i).getMark()) {
			min = group.get(i).getMark();
		}
	}

	return min;
}

double Manager::calcAverageMark(Group group) {
	double average = 0;

	for (int i = 0; i < group.getSize(); i++)
	{
		average += group.get(i).getMark();
	}

	return average / group.getSize();
}

Student Manager::getBestStudent(Group group) {
	double bestMark = getMaxMark(group);

	Student st = NULL;

	for (int j = 0; j < group.getSize(); j++)
	{
		if (bestMark == group.get(j).getMark()) {
			st = group.get(j);
		}
	}
	return st;
}
