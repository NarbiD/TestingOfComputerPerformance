#include <iostream>
#include "DataTypes.h"
#include "DataTypes.cpp"
#include "IntegralType.h"
#include "FloatPointType.h"
#include "IntegralType.cpp"
#include "FloatPointType.cpp"

using namespace std;

#pragma optimize("", off)
int main()
{
	IntegralType<int>* Int = new IntegralType<int>();
	IntegralType<char>* Char = new IntegralType<char>();
	IntegralType<long long>* Long = new IntegralType<long long>();
	FloatPointType<float>* Float = new FloatPointType<float>();
	FloatPointType<double>* Double = new FloatPointType<double>();

	Char->Test();
	Int->Test();
	Long->Test();
	Float->Test();
	Double->Test();

	Char->ShowAll();
	Int->ShowAll();
	Long->ShowAll();
	Float->ShowAll();
	Double->ShowAll();

	system("pause");
	return 0;
}
#pragma optimize("", on)
