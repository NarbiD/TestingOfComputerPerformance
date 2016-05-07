#include <iostream>
#include "IntegralType.h"
#include "FloatPointType.h"

using namespace std;

int main()
{
	IntegralType<int>* Int = new IntegralType<int>();
	Int->Test();
	system("pause");
	return 0;
}