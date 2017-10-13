#include "stdafx.h"
#include <string>
#include<iostream>

using namespace std;

int main()
{
	string string;
	getline (cin,  string);
	int lenght = string.length();
	for (int i = 0; i < lenght; i++)
	{
		if (string[i] == ' ') cout << "%20";
		else cout << string[i];
	}
	cout << endl;
	system("pause");
	return 0;
}
