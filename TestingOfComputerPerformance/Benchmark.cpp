#include <iostream>
#include "DataTypes.h"
#include "DataTypes.cpp"
#include "IntegerType.h"
#include "FloatPointType.h"
#include "IntegerType.cpp"
#include "FloatPointType.cpp"

using namespace std;

void BenchmarkingProcess();

int main()
{
	BenchmarkingProcess();

	system("pause");
	return 0;
}

#pragma optimize("", off)
void BenchmarkingProcess()
{	
	IntegerType<int>* Int = new IntegerType<int>();
	IntegerType<char>* Char = new IntegerType<char>();
	IntegerType<long long>* Long = new IntegerType<long long>();
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
}
#pragma optimize("", on)