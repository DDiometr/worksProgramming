

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int num, counter = 0;
	setlocale(LC_ALL, "Russian");
	cin >> num;
	if (num > 0)
	{
		for (int i = 2; i < num ; i++)
		{
			if (num % i == 0)
			{
				counter++;
				break;
			}
		}

		if (counter == 0)
		{
			cout << "Простое" << endl;
		}
		else
		{
			cout << "Составное" << endl;
		}
	}
	else
	{
		cout << "Error" << endl;
	}
	
	
}

