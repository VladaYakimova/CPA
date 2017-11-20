// Lab32122.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main(void) {
	int matrix[10][10] = {};
	int *pointer = matrix[0];

	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++) 
		{
			*pointer = j * i;
			*pointer++;
		}
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout.width(4);
			cout << matrix[i][j];
		}
		cout << endl;
	}
	return 0;
}