﻿#include <math.h> 
#include <stdio.h>
#include <stdlib.h>
#include <iostream>


using namespace std;

class Triangle {
private:
	float angle1, angle2, angle3, side1, side2, side3;
public:
	
	void set_sides()
	{
		cin >> side1 >> side2 >> side3;
	}
	
	void set_angles()
	{
		cin >> angle1 >> angle2 >> angle3;
	}

	float square(void)
	{
		float square, P;
		P = (side1 + side2 + side3) / 2;
		square = sqrt(P * (P - side1) * (P - side2) * (P - side3));
		if (square == 0) cout << "Triangle doesn't exist" << endl;
		return square;
	}

	float perimeter(void)
	{
		float perimeter;
		perimeter = side1 + side2 + side3;
		return perimeter;
	}
	
	void hight(void)
	{
		float h1, h2, h3, p;
		p = (side1 + side2 + side3) / 2;
		h1 = sqrt(4 * p * ((p - side1) * (p - side2) * (p - side3)) / (side1 * side1));
		h2 = sqrt(4 * p * ((p - side1) * (p - side2) * (p - side3)) / (side2 * side2));
		h3 = sqrt(4 * p * ((p - side1) * (p - side2) * (p - side3)) / (side3 * side3));
		cout << h1 << " " << h2 << " " << h3 << endl;
	}

	void kind_of_triangle(void)
	{
		if (side1 == side2 == side3)

			cout << "Equilateral triangle" << endl;
		else
		{
			if ((side1 == side2) || (side2 == side3) || (side3 == side1))

				cout << "Isosceles triangle" << endl;

			else
			{
				if ((angle1 == 90) || (angle2 == 90) || (angle3 == 90))
					cout << "Right triangle" << endl;
			}
		}
	}

};

int main()
{
	Triangle T;
	cout << "Enter sides of triangle" << endl;
	T.set_sides();
	cout << "Enter angles of triangle" << endl;
	T.set_angles();
	T.square(void);
	T.perimeter(void);
	T.hight(void);
	T.kind_of_triangle(void);
	return 0;
}
