#include <iostream>
#include "Header_para.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	float cost = 5.50;
	int num = 45;

	Products prod(cost, num);
	prod.display(prod);

	Products prod1(prod);
	
	prod1.read(prod1);

	prod1.display(prod1);
	
	prod.cost(prod1);
}
}