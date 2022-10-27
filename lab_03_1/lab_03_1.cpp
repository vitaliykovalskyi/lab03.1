// Lab_03_1.cpp
// Ковальський Віталій
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 11

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; // вхідний параметр
	double y; // результат обчислення виразу
	double A; // проміжний результат - функціонально стала частина виразу
	double B; // проміжний результат - функціонально змінна частина виразу

	cout << "x = "; cin >> x;

	A = 2 * abs(5-x);

	// спосіб 1: розгалуження в скороченій формі
	if (x <= -1)
		B = (exp(abs(2 + x)));
	if (-1 < x && x < 1)
		B = (pow(sin(1/(abs(2+x))),2));
	if (x >= 1)
		B = ((pow(cos(x), 2))/(1+abs(sin(x))));

	y = A - B;

	cout << endl;
	cout << "1) y = " << y << endl;

	// спосіб 2: розгалуження в повній формі
	if (x <= -1)
		B = (exp(abs(2 + x)));
	else
		if (-1 < x && x < 1)
			B = (pow(sin(1 / (abs(2 + x))), 2));
		else
			B = ((pow(cos(x), 2)) / (1 + abs(sin(x))));

	y = A - B;

	cout << "2) y = " << y << endl; 
	
	cin.get();
	return 0;
}