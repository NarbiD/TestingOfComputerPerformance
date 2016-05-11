#pragma once
#include <string>
#include <chrono>
#include <climits>

#define NUMBER_OF_LOOP_STARTS 1
#define NUMBER_OF_VARIABLES 40

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


	void Initialization();									//variable initialization
	double SelectAverage(double* _arr);						//select averange in array
	void Show(std::string _sign, double _OperationPerSec);	//show result for one operation
	
	//tests for base operations
	virtual double TestPlus() = 0;
	virtual double TestMinus() = 0;
	virtual double TestMult() = 0;
	virtual double TestDiv() = 0;

	//single pass all tests
	virtual void Retest(double& _plus, double& _minus, double& _mult, double& _div) = 0;

public:
	void Test();									//run test for data type
	void ShowAll();									//show rezults for all operations
	DataTypes();
	~DataTypes();
};

//wide of columns
struct columns
{
	const int first = 3;						//sign of operation
	const int second = 8;						//type name
	const int third = 13;						//number operation per second
	const int fourth = 50;						//diagram
};