

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int numbOne, numbTwo;
	float epsilon = 0.000001;
	cin >> numbOne;
	cin >> numbTwo;
	bool t = fabs(1.0 / (float)numbOne - 1.0 / (float)numbTwo) < epsilon;
	if (t)
	{
		cout << "Values are equal(by 0.000001 epsilon)" << endl;
	}
	else
	{
		cout << "Values are not equal(by 0.000001 epsilon)" << endl;
	}
	return 0;
}