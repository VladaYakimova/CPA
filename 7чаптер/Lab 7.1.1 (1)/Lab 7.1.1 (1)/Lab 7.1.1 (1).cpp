// Lab 7.1.1 (1).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main(void) {

	int a = 8, b = 0, c = 0;
	cin >> b;
	try {
		if (b == 0)
			throw string("not valid");
		c = a / b;
	}
	catch (string &mes)
	{
		cout << mes << endl;
	}

	cout << c << endl;

	return 0;
}
