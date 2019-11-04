

#include "pch.h"
#include <iostream>


using namespace std;

int main()
{
	long long iC, jC, iLim, jLim, s, x1 = 1000000000000000, x2;
	bool changed = true;
	cin >> s >> iC >> iLim >> jC >> jLim;
	for (long long i = iC; i <= iLim; i++)
	{
		for (long long j = jC; j <= jLim; j++)
		{
			if (i + j == s)
			{
				if (i < x1)
				{
					x1 = i; 
					x2 = j;
					changed = true;
				}
			}
		}
	}
	if (changed)   //0 -2 -1 1 2 // 0 -2 -1 5 6
	{
		cout << endl << x1 << " " << x2;
	}
	else
	{
		cout << -1;
	}
}

