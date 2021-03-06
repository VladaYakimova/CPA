// Lab 7.2.4 (1).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class MyException
{
public:
	string msg;
	MyException(string txt) : msg(txt) {}
};

float square_area(int a)
{
	if (a < 0)
		throw new MyException("error, a < 0");
	return a * a;
}

float rectangle_area(int a, int b)
{
	if (a < 0)
		throw new MyException("error, a < 0");
	if (b < 0)
		throw new MyException("error, a < 0");
	return a * b;
}

int main(void) {
	float a, b;
	cin >> a;
	cin >> b;
	try
	{
		float rrectangle = rectangle_area(a, b);
		float rsquare = square_area(a);
		cout << rsquare << endl << rrectangle << endl;
	}
	catch (MyException *exception)
	{
		cout << exception->msg << endl;
	}
	return 0;
}
