#pragma once

#include <string>
#include <chrono>
#include <climits>



template <typename Type>
class DataTypes
{
protected:

	std::string Name;

	double Plus, Minus, Mult, Div, MaxValue;							//time of operations
	double TimeWithoutEmptyLoop;									
	double TimeTotalPlus, TimeTotalMinus, TimeTotalMult, TimeTotalDiv;	//time with loops

	std::chrono::high_resolution_clock::time_point StartTime, FinishTime;

	Type a1, a2, a3, a4, a5;
	Type b1, b2, b3, b4, b5;
	Type c1, c2, c3, c4, c5;
	Type d1, d2, d3, d4, d5;
	Type e1, e2, e3, e4, e5;
	Type f1, f2, f3, f4, f5;
	Type g1, g2, g3, g4, g5;
	Type h1, h2, h3, h4, h5;

public:
	DataTypes(std::string name);
	~DataTypes();
};

