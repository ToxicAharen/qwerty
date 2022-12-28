#include <iostream>
using namespace std;

float PI = 3.1415926;

class Triangle		
{
private:
	int side1;		
	int side2;
	int side3;
	int corner1;	
	int corner2;	
	int corner3;	
	

public:
	
	Triangle(int s1, int s2, int s3, int cor1, int cor2, int cor3)
	{
		side1 = s1;
		side2 = s2;
		side3 = s3;
		corner1 = cor1;
		corner2 = cor2;
		corner3 = cor3;
	}
	
	Triangle(Triangle& triag)
	{
		side1 = triag.side1;
		side2 = triag.side2;
		side3 = triag.side3;
		corner1 = triag.corner1;
		corner2 = triag.corner2;
		corner3 = triag.corner3;
	}

	Triangle()
	{}
	void set_side1(int size)
	{
		side1 = size;
	}
	int get_side1()
	{
		return side1;
	}
	void set_side2(int size)
	{
		side2 = size;
	}
	int get_side2()
	{
		return side2;
	}
	void set_side3(int size)
	{
		side3 = size;
	}
	int get_side3()
	{
		return side3;
	}

	void set_cor1(int size)
	{
		corner1 = size;
	}
	int get_cor1()
	{
		return corner1;
	}
	void set_cor2(int size)
	{
		corner2 = size;
	}
	int get_cor2()
	{
		return corner2;
	}
	void set_cor3(int size)
	{
		corner3 = size;
	}
	int get_cor3()
	{
		return corner3;
	}
	
	float Get_square()
	{
		int square = 0;
		square = 0.5 * side1 * side2 * sin(corner1 * PI / 180);
		return square;
	}
	
	int get_perimeter()
	{
		int perim = 0;
		perim = side1 + side2 + side3;
		return perim;
	}
	
	float get_high(int number_of_side) 
	{
		int high = 0;
		if (number_of_side == 1)
		{
			high = side2 * sin(corner1 * PI / 180);
			return high;
		}
		if (number_of_side == 2)
		{
			high = side1 * sin(corner1 * PI / 180);
			return high;
		}
		high = side1 * sin(corner3 * PI / 180);
		return high;
	}
	
	void get_type()
	{
		if (((side1 == side2) || (side2 == side3) || (side1 == side3)) && (!(side1 == side2 == side3)))
		{
			cout << "����������� - ��������������" << endl;
		}
		if (side1 == side2 == side3)
		{
			cout << "����������� - ��������������" << endl;
		}
		if ((corner1 = 90) || (corner2 == 90) || (corner3 == 90))
		{
			cout << "����������� -  �������������" << endl;
		}
	}
	void operator = (const Triangle triag)
	{
		this->side1 = triag.side1;
		this->side2 = triag.side2;
		this->side3 = triag.side3;
		this->corner1 = triag.corner1;
		this->corner2 = triag.corner2;
		this->corner3 = triag.corner3;
	}

	void operator +(const int num)
	{
		this->side1 += num;
		this->side2 += num;
		this->side3 += num;

	}
};
};