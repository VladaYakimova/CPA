// 4.5.7 (1).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

int main()
{
	std::string from;
	std::string to;
	std::string sentence;
	std::cout << "from: ";
	std::getline(std::cin, from);

	std::cout << "to: ";
	std::getline(std::cin, to);

	std::cout << "enter sentence: ";
	std::getline(std::cin, sentence);
	int index = 0;
	index -= to.length();
	while ((index = sentence.find(from, index + to.length())) != -1)
	sentence.replace(index, from.length(), to);

	std::cout << sentence << "\n";
}

