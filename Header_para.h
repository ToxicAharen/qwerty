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
		Products* prod = 0;
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

	Products read(Products prod)
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
		return  prod;
	}

	void display(Products prod)
	{
		cout << "��������� ������: " << prod.first << endl;
		cout << "���������� �������: " << prod.second << endl;
	}
	void cost(Products prod)
	{
		float sum = 0;
		sum = prod.first * prod.second;
		cout << "��������� ����� ������: " << sum << endl;
	}
};