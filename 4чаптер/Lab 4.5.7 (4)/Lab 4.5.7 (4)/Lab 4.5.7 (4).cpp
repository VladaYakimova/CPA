// Lab 4.5.7 (4).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
	string first;
	cin >> first;
	string second;
	cin >> second;

	bool anagram = true;

	for (int i = 0; i < first.length(); i++){
		if (first.find(second.substr(i, 1)) != string::npos){
			first.erase(first.find(second.substr(i, 1)));
		} else
			anagram = false;
	}
	cout << (anagram ? "anagram" : "not anagram") << endl;
	return 0;
}