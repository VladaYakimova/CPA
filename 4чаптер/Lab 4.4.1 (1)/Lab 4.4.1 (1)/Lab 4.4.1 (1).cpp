// Lab 4.4.1 (1).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
#include <string> 

using namespace std;

int NumberLetters(int i, string sent, string lett[])
{
	int j = 0;
	for (int k = 0; k <= sent.length(); k++) {
		if (sent.substr(k, 1) == (lett[i]))
		{
			j++;
		}
	} return j;
}
int main(void) {
	string sent;
	string lett[] = { "a","b","c","d","e","f","g","h","i","j","k","l",
		"m","n","o","p","q","r","s","t","u","v","w","x","y","z" };
	getline(cin, sent);

	for (int i = 0; i < 26; i++) {
		cout << lett[i] << "=" << NumberLetters(i, sent, lett) << endl;
	} return 0;
}