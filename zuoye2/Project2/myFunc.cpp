#include "myFunc.h"
#include<iostream>
using namespace std;

void triangle()
{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 0; j < 10 - i; j++)
		{
			cout << "*" << " ";
		}
		cout << endl;
	}
}

void multiTable()
{
	for (int i = 9; i > 0; i--)
	{
		for (int j = 1; j < i + 1; j++)
		{
			cout << i << "*" << j << "=" << i * j << "\t";
		}
		cout << endl;
	}
}
