#pragma once

#include <conio.h>
#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

class Fraction
{
private:
	int numerator,
		denominator;
public:
	static int count; //������� ���-�� ��������� ������

	Fraction();
	Fraction(int, int);

	friend ostream& operator<<(ostream& out, const Fraction& fraction); //���������� �������� ������

	Fraction operator+(Fraction&); //�������� ���� ������
	Fraction operator+(int);       //�������� ����� � �����
	friend Fraction operator+(const int, const Fraction&); //�������� ����� � �����

	Fraction operator-(Fraction&); //��������� ���� ������
	Fraction operator-(int);       //��������� ����� �� �����
	friend Fraction operator-(const int, const Fraction&); //��������� ����� �� �����

	Fraction operator*(Fraction&); //��������� ���� ������
	Fraction operator*(int);       //��������� ����� �� �����
	friend Fraction operator*(const int, const Fraction&); //��������� ����� �� �����


	Fraction operator/(Fraction&); //������� ���� ������
	Fraction operator/(int);       //������� ����� �� �����
	friend Fraction operator/(const int, const Fraction&); //������� ����� �� �����

	static int gcd(int, int); //���
	void reduce(); //����������
	void print();  //����� �� �������

	static void printAsFraction(double);
	static void printAsFraction(const char*);
};


