// Lab 4.5.2 (1).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	string sentence;
	int index = -1;
	cout << "enter sentence: ";
	getline(cin, sentence);
	while ((index = sentence.find("  ")) != -1)
	sentence = sentence.replace(index, 2, " ");
	cout << sentence << "\n";
}
