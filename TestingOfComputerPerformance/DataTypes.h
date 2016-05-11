#pragma once
//#include <iostream>
#include <string>
#include <chrono>
#include <climits>

#define NUMBER_OF_LOOP_STARTS 5

template <typename Type>
class DataTypes
{
protected:	
	//Name of data type
	std::string Name;

	//variables
	Type a1, a2, a3, a4, a5, b1, b2, b3, b4, b5, c1, c2, c3, c4, c5, d1, d2, d3, d4, d5;
	Type e1, e2, e3, e4, e5, f1, f2, f3, f4, f5, g1, g2, g3, g4, g5, h1, h2, h3, h4, h5;

	//values of time
	std::chrono::high_resolution_clock::time_point StartTime, FinishTime;

	//arrays with results of test operations
	//every element of array is time of one test for one operation
	double setPlus[NUMBER_OF_LOOP_STARTS];
	double setMinus[NUMBER_OF_LOOP_STARTS];
	double setMult[NUMBER_OF_LOOP_STARTS];
	double setDiv[NUMBER_OF_LOOP_STARTS];

	//averages of all tests with operation
	double Plus, Minus, Mult, Div, MaxValue;

	//total time spent on the operation within a single test
	double TimeTotalPlus, TimeTotalMinus, TimeTotalMult, TimeTotalDiv;

	void SelectMaxValue();
	double SelectAverage(double* arr);
	virtual void Retest(double& plus, double& minus, double& mult, double& div) = 0;
	void Show(std::string sign, double OperationPerSec);

	//wide of columns
	struct columns
	{
		const int first = 2;						//sign of operation
		const int second = 8;						//type name
		const int third = 13;						//number operation per second
		const int fourth = 48;						//diagram
		const int fifth = 4;						//percentage
	};

public:
	void ShowAll();
	void Test();
	
	DataTypes();
	~DataTypes();
};

