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
	Type a1, a2, a3, a4, a5, a6, a7, a8, a9, a0;
	Type b1, b2, b3, b4, b5, b6, b7, b8, b9, b0;
	Type c1, c2, c3, c4, c5, c6, c7, c8, c9, c0;
	Type d1, d2, d3, d4, d5, d6, d7, d8, d9, d0;
	
	//values of time
	std::chrono::high_resolution_clock::time_point StartTime, FinishTime;

	//averages of all tests with operation
	double Plus, Minus, Mult, Div, Increment, Decrement, MaxValue;

	//total time spent on the operation within a single test
	double TimeTotalPlus, TimeTotalMinus, TimeTotalMult, TimeTotalDiv, TimeTotalIncrement, TimeTotalDecrement;

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
	virtual double TestIncrement() = 0;
	virtual double TestDecrement() = 0;

	virtual void SingleTest(double& _plus, double& _minus, double& _mult, double& _div, double& _inc, double& _dec) = 0;

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