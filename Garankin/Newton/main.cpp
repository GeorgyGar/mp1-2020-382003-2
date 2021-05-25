#pragma once
#include <cmath>
#include <iostream>
#include"solver.h"
#include "NewtonMethod.h"
#include "�hordMethod.h"
using namespace std;



int main()
{
	setlocale(LC_ALL, "Russian");
	int index;
	double x1;
	double b;
	double* cx1;
	double* cb;
	cx1 = &x1;
	cb = &b;
	function function(2.1);
	solver solver;
	NewtonMethod Newton;
	ChordMethod Chord;

	cout << "�������:" << endl;
	cout << "1. x^3 + 4x - 3 = 0" << endl;
	cout << "..........................."<<endl;
	
	solver.print(&function, 2.1);
	cout << "�������� �����:" << endl;
	cout << "1. ����� �������" << endl << "2. ����� �������" << endl;
	cin >> index;
	cout << endl;
	switch (index)
	{
	case 1:
	{
		solver.method(&Newton, &function);
		cout << *cx1;
		break;
	}
	case 2:
	{
		solver.method(&Chord, &function);
		cout <<*cb;
		break;
	}
	default:cout << "������" << endl;
		break;
	}
}