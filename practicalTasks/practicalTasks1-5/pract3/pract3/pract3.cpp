

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double a;
	int b;
	cout << endl << "Введите а: ";
	cin >> a;
	cout << endl << "Введите и: ";
	cin >> b;

    cout << "a + b = " << a + b << endl;
	cout << "a - b = " << a - b << endl;
	cout << "a * b = " << a * b << endl;
	cout << "a / b = " << a / b << endl;
}

