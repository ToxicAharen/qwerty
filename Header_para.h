#include <iostream>
using namespace std;


class Products		
{
private:
	float first;		
	int second;			



public:
	Products(float cost, int num)
	{
		Products* init = 0;
		if (cost <= 0)
		{
			cout << "����� �� ����� ���� ������������� ��� ������ 0!" << endl;
		}
		if (num < 0)
		{
			cout << "���������� ������� �� ����� ���� �������������!" << endl;
		}
		cout << "������ ���������. ������� ������ ������" << endl;
		first = cost;
		second = num;
	}

	Products read(Products init)
	{
		float cost = 0;
		float num = 0;
		cout << "������� ��������� ������ cost: ";
		cin >> cost;
		cout << endl << "������� ���������� ������ num: ";
		cin >> num;
		while (cost <= 0)
		{
			cout << "����� �� ����� ���� ������������� ��� ������ 0! ������� ������ ��������!" << endl;
			cin >> cost;
		}
		while (num < 0)
		{
			cout << "���������� ������� �� ����� ���� �������������! ������� ������ ��������!" << endl;
			cin >> num;
		}
		first = cost;
		second = num;
		return  init;
	}

	void display(Products init)
	{
		cout << "��������� ������: " << init.first << endl;
		cout << "���������� �������: " << init.second << endl;
	}
	void cost(Products init)
	{
		float sum = 0;
		sum = init.first * init.second;
		cout << "��������� ����� ������: " << sum << endl;
	}
};