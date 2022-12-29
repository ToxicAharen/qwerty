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
			cout << "Сумма не может быть отрицательной или равной 0!" << endl;
		}
		if (num < 0)
		{
			cout << "Количество товаров не может быть отрицательным!" << endl;
		}
		cout << "Данные корректны. Элемент класса создан" << endl;
		first = cost;
		second = num;
	}

	Products read(Products init)
	{
		float cost = 0;
		float num = 0;
		cout << "Введите стоимость товара cost: ";
		cin >> cost;
		cout << endl << "Введите количество товара num: ";
		cin >> num;
		while (cost <= 0)
		{
			cout << "Сумма не может быть отрицательной или равной 0! Введите другое значение!" << endl;
			cin >> cost;
		}
		while (num < 0)
		{
			cout << "Количество товаров не может быть отрицательным! Введите другое значение!" << endl;
			cin >> num;
		}
		first = cost;
		second = num;
		return  init;
	}

	void display(Products init)
	{
		cout << "Стоимость товара: " << init.first << endl;
		cout << "Количество товаров: " << init.second << endl;
	}
	void cost(Products init)
	{
		float sum = 0;
		sum = init.first * init.second;
		cout << "Стоимость всего товара: " << sum << endl;
	}
};