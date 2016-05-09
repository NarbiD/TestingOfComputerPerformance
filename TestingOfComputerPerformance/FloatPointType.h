#pragma once
#include "DataTypes.h"

#define DEVIDER 127
#define ITER_LOOP_FLOAT 1000000
#define NUMB_OF_FLOAT_VAR 16

template <typename Type>
class FloatPointType :
	public DataTypes<Type>
{
private:

	double Empty;
	double EmptyDiv;

public:
	FloatPointType() : DataTypes<Type>() {}
	
	double EmptyLoop();
	double EmptyLoopDiv();

	double TestPlus();
	double TestMinus();
	double TestMult();
	double TestDiv();

	void Test();

	~FloatPointType();
};



