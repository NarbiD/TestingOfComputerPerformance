#pragma once
//#include <iostream>
#include <string>
#include <chrono>
#include <climits>


template <typename Type>
class DataTypes
{
protected:
	struct column
	{
		const int first = 2;						//sign of operation
		const int second = 8;						//type name
		const int third = 13;						//number operation per second
		const int fourth = 48;						//diagram
		const int fifth = 4;						//percentage
	};
	void SelectMaxValue();
	void Show(std::string sign, double OperationPerSec);
	void ShowAll();


	std::string Name;

	double Plus, Minus, Mult, Div, MaxValue;							//time of operations		
	double TimeTotalPlus, TimeTotalMinus, TimeTotalMult, TimeTotalDiv;	//time with loops

	std::chrono::high_resolution_clock::time_point StartTime, FinishTime;

	Type a1, a2, a3, a4, a5, b1, b2, b3, b4, b5, c1, c2, c3, c4, c5, d1, d2, d3, d4, d5;
	Type e1, e2, e3, e4, e5, f1, f2, f3, f4, f5, g1, g2, g3, g4, g5, h1, h2, h3, h4, h5;

public:
	DataTypes();
	~DataTypes();
};

