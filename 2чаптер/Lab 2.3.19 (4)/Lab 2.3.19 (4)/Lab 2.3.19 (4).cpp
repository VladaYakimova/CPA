

#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	int n;
	double answer = 1;
	cout << "Enter power" << endl;
	cin >> n;


	for (int i = 0; i < fabs(n); i++)
	{
		answer /= 2;
	}
	cout << fixed << setprecision(20) << answer << endl;
	return 0;
}

