#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

void mission_1()
{
	cout << "1) �������� ������� ���������� ���������� A � B � ������� ����� �������� A � B. \n";
	int a, b, c = 0;
	cout << "������� A � B: ";
	cin >> a >> b;
	c = a;
	a = b;
	b = c;
	cout << "A = " << a << " B = " << b << endl;
	cout << "____________________________________________________________\n";
}

void mission_2()
{
	cout << "2) ���� ���������� A, B, C. �������� �� ��������, \n";
	cout << "   ���������� ���������� A � B, B � � C, C � � A, \n";
	cout << "   � ������� ����� �������� ���������� A, B, C. \n";
	int a, b, c, x, y;
	cout << "������� A, B � C: ";
	cin >> a >> b >> c;
	x = c;
	y = b;
	b = a;
	c = y;
	a = x;
	cout << "A = " << a << " B = " << b << " C = " << c << endl;
	cout << "____________________________________________________________\n";
}

void mission_3()
{
	cout << "3) ���� ���������� A, B, C. �������� �� ��������, \n";
	cout << "   ���������� ���������� A � C, C � � B, B � � A, \n";
	cout << "   � ������� ����� �������� ���������� A, B, C. \n";
	int a, b, c, x, y;
	cout << "������� A, B � C: ";
	cin >> a >> b >> c;
	x = c;
	y = b;
	c = a;
	b = x;
	a = y;
	cout << "A = " << a << " B = " << b << " C = " << c << endl;
	cout << "____________________________________________________________\n";
}

void mission_4()
{
	cout << "4) ����� �������� ������� y = 3x^6 - 6x^2 - 7 ��� ������ �������� x \n";
	double x, y;
	cout << "������� x: ";
	cin >> x;
	y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
	cout << "y = " << y << endl;
	cout << "____________________________________________________________\n";
}

void mission_5()
{
	cout << "5) ����� �������� ������� y = 4(x-3)^6 - 7(x-3)^3 + 2 ��� ������ �������� x \n";
	double x, y;
	cout << "������� x: ";
	cin >> x;
	y = 4 * pow((x - 3), 6) - 7 * pow((x - 3), 3) + 2;
	cout << "y = " << y << endl;
	cout << "____________________________________________________________\n";
}

void mission_6()
{
	cout << "6) ���� ����� A. ��������� A^8 , ��������� ��������������� ���������� � ��� �������� ���������. \n";
	int a, b;
	cout << "������� A: ";
	cin >> a;
	b = a * a; // ������� b
	b = b * b; // ��������� ������� b
	a = b * b; // ������� ������� a
	cout << "���������: " << a << endl;
	cout << "____________________________________________________________\n";
}

void mission_7()
{
	cout << "7) ���� ����� A. ��������� A^15, ��������� ��� ��������������� ���������� � ���� �������� ���������. \n";
	int a, b, c;
	cout << "������� A: ";
	cin >> a;

	b = a * a; // ������� b
	c = b * a; // ��� c
	b = b * c; // ����� ������� b
	c = b * b; // ������� ������� c
	a = b * c; // ����������� ������� a

	cout << "���������: " << a << endl;
	cout << "____________________________________________________________\n";
}