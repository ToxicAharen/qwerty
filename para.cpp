#include <iostream>
#include "Header_para.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	float cost = 5.50;
	int num = 45;



	Products init(cost, num);

	init.display(init);

	Products init1(init);
	
	init1.read(init1);

	init1.display(init1);
	
	init.cost(init1);
}
