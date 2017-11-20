// Lab3475.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;

struct Date {
	int year;
	int month;
	int day;
};

Date today(void) {
	time_t insec = time(NULL); tm convtime = *localtime(&insec);
	Date date = { convtime.tm_year + 1900, convtime.tm_mon + 1, convtime.tm_mday };

	return date;
}

int main(void) {
	Date t = today();
	cout << t.year << "-" << t.month << "-" << t.day << endl;
	return 0;
}