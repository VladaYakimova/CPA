

#include "stdafx.h"
#include <iostream>

using namespace std;

int GetValidNumber()
{
	int number;
	bool valueIsCorrect = true;
	do
	{
		if (!valueIsCorrect)
		{
			cout << "enter value from 0 to 255" << endl;
		}

		cin >> number;
		valueIsCorrect = false;
	} while (number < 0 || number>255);
	return number;
}
int main()
{
	int first, second, thirth, fourth;
	cout << "Enter first" << endl;
	first = GetValidNumber();
	cout << "Enter second" << endl;
	second = GetValidNumber();
	cout << "Enter third" << endl;
	thirth = GetValidNumber();
	cout << "Enter fourth" << endl;
	fourth = GetValidNumber();
	cout << first << "." << second << "." << thirth << "." << fourth << endl;
	return 0;
}
