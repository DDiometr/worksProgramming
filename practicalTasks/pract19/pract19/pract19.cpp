

#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	int n, num, arr[10] = { 0 };
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		arr[num]++;
	}
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] != 0)
		{
			cout << i << ":" << arr[i] << endl;
		}
	}
}

