// Lab 4.1.9 (1).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int GetSubCount() 
{

	int subCount;

	do {
		cout << "Subjects count: ";
		cin >> subCount;
	} 
	while (subCount <= 0);
	return subCount;
}

int **GetGrades(int subCount)
{

	int** grades = new int*[subCount]; int gradeCount;

	for (int i = 0; i < subCount; i++) {
		do
		{
			cout << "Count of grades: ";
			cin >> gradeCount;
		} 
		while (gradeCount > 5 || gradeCount < 1);

		grades[i] = new int[gradeCount + 1];

		for (int j = 0; j < gradeCount; j++) {
			do 
		{
				cin >> grades[i][j];
			} while (grades[i][j] <= 0 || grades[i][j] >= 6);
			grades[i][gradeCount] = -1;
		}
	}

	return grades;
}

double FinalSubject(int *grades) {

	double sumGrades = 0;
	int countGrades = 0;

	for (int j = 0; ; j++) {

		if (grades[j] == -1)
			break;

		countGrades++;
		sumGrades += grades[j];
	}

	return sumGrades / countGrades;
}

void ShowFinal(int **grades, int subjectsCount) {

	double currentSubjectFinal, subjectsFinalSum = 0;

	for (int i = 0; i < subjectsCount; i++) {

		currentSubjectFinal = FinalSubject(grades[i]);
		subjectsFinalSum += currentSubjectFinal;

		cout.precision(2);
		cout << fixed << "Course " << i + 1 << ": final " << currentSubjectFinal << ", grades: ";

		for (int j = 0; ; j++) {
			if (grades[i][j] == -1)
				break;
			cout << grades[i][j] << ' ';
		}
		cout << endl;
	}

	cout << "Overall final: " << subjectsFinalSum / subjectsCount << endl;
}

int main()
{
	int subjectsCount = GetSubCount();
	int **grades = GetGrades(subjectsCount);
	ShowFinal(grades, subjectsCount);

	return 0;
}
