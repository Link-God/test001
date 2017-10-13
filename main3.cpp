#include "stdafx.h"
#include<sstream>
#include<iostream>
#include "string"

using namespace std;



int main()
{
	int array2[10], array1[10], array3[20];
	string str1, str2;
	bool ubyvan = false, nepoln = false;
	getline(cin, str1);
	istringstream stream(str1);
	for (int i = 0; i < 10; i++)
	{
		if (stream >> array1[i])
		{
			if (i > 0 && (array1[i - 1] > array1[i]))
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
	getline(cin, str2);
	istringstream stream1(str2);
	for (int i = 0; i < 10; i++)
	{
		if (stream1 >> array2[i])
		{
			if (i > 0 && (array2[i - 1] > array2[i]))
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

	for (int j = 0; j < 20; j++)
	{
		if (j < 10) array3[j] = array1[j];
		else array3[j] = array2[j - 10];
	}
	for (int i = 0; i < 19 ; i++) 
	{
		for (int j = 0; j < 19-i ; j++)
		{
			if (array3[j] > array3[j + 1])
			{
				int time = array3[j];
				array3[j] = array3[j + 1];
				array3[j + 1] = time;
			}
		}
	}
	for (int j = 0; j < 20; j++)
	{
		cout << array3[j]<< " ";
	}
	system("pause");
	return 0;
}
