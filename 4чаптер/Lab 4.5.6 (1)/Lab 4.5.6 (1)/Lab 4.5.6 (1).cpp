// Lab 4.5.6 (1).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<string>
#include<iostream>
int main()
{
	std::string sentence;
	std::getline
	(std::cin, sentence);
	bool isend;
	for (int i = 0; i < sentence.length(); i++){
		do{
			isend = false;
			if (sentence.substr(i, 1) == " " && sentence.substr(i + 1, 1) == " "){
				sentence.erase(i + 1, 1);
				isend = true;
			}
		} while (isend);
	}
	std::cout << sentence << "\n";
}