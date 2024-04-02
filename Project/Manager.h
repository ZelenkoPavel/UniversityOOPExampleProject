#pragma once
#include "Student.h"


class Manager {
public:
	double getMaxMark(Student* students, int length) {
		double max = students[0].mark;

		for (int i = 1; i < length; i++)
		{
			if (max < students[i].mark) {
				max = students[i].mark;
			}
		}

		return max;
	}

	double getMinMark(Student* students, int length) {
		double min = students[0].mark;

		for (int i = 1; i < length; i++)
		{
			if (min > students[i].mark) {
				min = students[i].mark;
			}
		}

		return min;
	}

	double calcAverageMark(Student* students, int length) {
		double average = 0;

		for (int i = 0; i < length; i++)
		{
			average += students[i].mark;
		}

		return average / length;
	}

	Student getBestStudent(Student* students, int length) {
		double bestMark = getMaxMark(students, length);
		
		Student st = NULL;

		for (int j = 0; j < length; j++)
		{
			if (bestMark == students[j].mark) {
				st = students[j];
			}
		}
		return st;
	}

};