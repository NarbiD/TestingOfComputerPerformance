#include <iostream>
#include <ctime>
#include "tests.h"
#include "view.h"
#include "IntegralType.h"
#include "FloatPointType.h"
#include <exception>

using namespace std;

int main()
{
	
	IntegralType<int>* Int = new IntegralType<int>();
		//FloatPointType<double> Double;
		Int->Test();
		//Double.Test();
		system("pause");
	return 0;
}