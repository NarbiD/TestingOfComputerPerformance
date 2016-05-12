#pragma once
#include <string>
#include <chrono>
#include <climits>

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

	//averages of all tests with operation
	double Plus, Minus, Mult, Div, Increment,MaxValue;

	//total time spent on the operation within a single test
	double TimeTotalPlus, TimeTotalMinus, TimeTotalMult, TimeTotalDiv, TimeTotalIncrement;

	//variable initialization
	void Initialization();	

	//select averange in array
	double SelectAverage(double* _arr, int _n);			

	//show result for one operation
	void Show(std::string _sign, double _OperationPerSec);	
	
	//tests for base operations
	virtual double TestPlus() = 0;
	virtual double TestMinus() = 0;
	virtual double TestMult() = 0;
	virtual double TestDiv() = 0;

	virtual void SingleTest(double& _plus, double& _minus, double& _mult, double& _div, double& _inc) = 0;

public:
	//run test for all operations
	void Test(int precision);

	//show rezults for all operations
	void ShowAll();						

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