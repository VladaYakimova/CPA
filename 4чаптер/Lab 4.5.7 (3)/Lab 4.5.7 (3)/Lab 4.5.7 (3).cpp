// Lab 4.5.7 (3).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

int main()
{
	std::string first, second;
	int letterCountInFirst = 0, letterCountInSecond = 0, index = -1;
	std::cout << "first word:";
	std::cin >> first;
	std::cout << "second word:";
	std::cin >> second;
	bool result = true;
	if (first.length() != second.length()) 
	{
		result = false;
	}
	else
	{
		for (int i = 0; i < first.length(); i++)
		{

			while ((index = first.find(first[i], index + 1)) != -1)
				letterCountInFirst++;
			while ((index = second.find(first[i], index + 1)) != -1)
				letterCountInSecond++;
			if (letterCountInFirst != letterCountInSecond) 
			{
				result = false;
				break;
			}
		}
	}

	std::cout << (result ? "" : "this is not") << " anagrams" << std::endl;
    return 0;
}
