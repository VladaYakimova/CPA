// Lab 4.5.7 (7).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<string>
#include<iostream>
using namespace std;
int main()
{
	std::string password;
	std::getline(std::cin, password);
	if (password.length() < 8)
		cout << "must be > 8" << endl;
	bool valid = true;

	for (char j = '0'; j <= '9'; j++) {
		if (password.find(j) != string::npos) {
			break;
		}
		if (j == '9') {
			valid = false;  cout << "Must digit" << endl;
		}
	}

	for (char j = 'A'; j <= 'Z'; j++) {
		if (password.find(j) != string::npos) {
			break;
		}
		if (j == 'Z')
		{
			valid = false; cout << "upper letter" << endl;
		}
	}
	for (char j = '['; j <= '`'; j++) {
		if (password.find(j) != string::npos) {
			break;
		}
		if (j == '`') {
			valid = false;
			cout << "special" << endl;
		}
	}
	if (valid)
		cout << "password is valid" << endl;
	return 0;
}