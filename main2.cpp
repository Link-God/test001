// ConsoleApplication12.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<sstream>
#include<iostream>
#include "string"

using namespace std;



int main()
{
	int array[10];
	char op;
	int sum;
	string str;
	bool fail;
	bool ubyvan = false, nepoln = false;
	getline(cin, str);
	istringstream stream(str);
	for (int i = 0; i < 10; i++)
	{
		if (stream >> array[i])
		{
			if (i > 0 && (array[i - 1] > array[i]))
			{
				ubyvan = true;
			}
		}
		else
		{
			nepoln = true;
			break;
		}
	}
	if (nepoln)
	{
		cout << "An error has occurred while reading the input sequence.";
		system("pause");
		return-1;
	}
	if (ubyvan)
	{
		cout << "The input sequence must be non-decreasing.";
		system("pause");
		return-1;
	}
	cin >> sum;
	for (int j = 0; j < 9; j++) 
	{
		for (int i = 1; i < 10; i++)
		{

			if ((array[j] + array[i] == sum))
			{
				cout << array[j] << " " << array[i] << endl;
				system("pause");
				return -1;
			}
			else  fail = true;
		}
	}
	if (fail) cout << "There is no such pair of numbers." << endl;
	system("pause");
	return 0;
}
