// Lab_03_1.cpp
// ����������� ³����
// ����������� ������ � 3.1
// ������������, ������ ��������: ������� ���� �����.
// ������ 11

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; // ������� ��������
	double y; // ��������� ���������� ������
	double A; // �������� ��������� - ������������� ����� ������� ������
	double B; // �������� ��������� - ������������� ����� ������� ������

	cout << "x = "; cin >> x;

	A = 2 * abs(5-x);

	// ����� 1: ������������ � ��������� ����
	if (x <= -1)
		B = (exp(abs(2 + x)));
	if (-1 < x && x < 1)
		B = (pow(sin(1/(abs(2+x))),2));
	if (x >= 1)
		B = ((pow(cos(x), 2))/(1+abs(sin(x))));

	y = A - B;

	cout << endl;
	cout << "1) y = " << y << endl;

	// ����� 2: ������������ � ����� ����
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