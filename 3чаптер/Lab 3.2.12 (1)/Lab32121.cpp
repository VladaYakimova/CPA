// Lab32121.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main(void) {
	int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 };
	int n = sizeof(vector) / sizeof(vector[0]);

	int *pointer = vector; int min = 0;

	for (int i = 0; i < n; i++) {
		if (*pointer < min) {
			min = *pointer;
		}  *pointer++;
	}
	cout << "min: " << min << endl;

	return 0;
}