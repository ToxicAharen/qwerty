﻿#include <iostream>
#include "Header.h"


using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int s1 = 2;
	int s2 = 2;
	int s3 = 10;
	int cor1 = 90;
	int cor2 = 45;
	int cor3 = 45;
	
	Triangle triang(s1, s2, s3, cor1, cor2, cor3);

	
	triang.set_side1(12);
	cout << "Сторона 1 = " << triang.get_side1() << endl;

	triang.set_side2(12);
	cout << "Сторона 2 = " << triang.get_side2() << endl;

	triang.set_side3(s3);
	cout << "Сторона 3 = " << triang.get_side3() << endl << endl;

	
	triang.set_cor1(cor1);
	cout << "Угол между 1 и 2 стороной = " << triang.get_cor1() << endl;

	triang.set_cor2(cor2);
	cout << "Угол между 2 и 3 стороной = " << triang.get_cor2() << endl;

	triang.set_cor3(cor3);
	cout << "Угол между 1 и 3 стороной = " << triang.get_cor3() << endl << endl;

	
	Triangle triang2(triang);

	

	cout << "Площадь треугольника = " << triang2.Get_square() << endl;



	cout << "Периметр треугольника = " << triang2.get_perimeter() << endl;


	cout << "Высота к 1-ой стороне = " << triang2.get_high(1) << endl;
	cout << "Высота к 2-ой стороне = " << triang2.get_high(2) << endl;
	cout << "Высота к 3-ой стороне = " << triang2.get_high(3) << endl << endl;

	

	triang2.get_type();
}