#include <iostream>
#include "DataTypes.h"
#include "DataTypes.cpp"
#include "IntegerType.h"
#include "FloatPointType.h"
#include "IntegerType.cpp"
#include "FloatPointType.cpp"

using namespace std;

void BenchmarkingProcess(int precision);


int main(int argc, char* argv[])
{
	int precision = 3;
	if (argc == 2)
		precision = atoi(argv[1]);
		
	BenchmarkingProcess(precision);

	system("pause");
	return 0;
}



#pragma optimize("", off)
void BenchmarkingProcess(int precision)
{	
	IntegerType<int>* Int = new IntegerType<int>();
	IntegerType<char>* Char = new IntegerType<char>();
	IntegerType<long long>* Long = new IntegerType<long long>();
	FloatPointType<float>* Float = new FloatPointType<float>();
	FloatPointType<double>* Double = new FloatPointType<double>();

	Char->Test(precision);
	Int->Test(precision);
	Long->Test(precision);
	Float->Test(precision);
	Double->Test(precision);

	Char->ShowAll();
	Int->ShowAll();
	Long->ShowAll();
	Float->ShowAll();
	Double->ShowAll();
}
#pragma optimize("", on)
