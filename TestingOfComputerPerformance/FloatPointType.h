#pragma once
#include "DataTypes.h"

#define DEVIDER SCHAR_MAX
#define ITER_LOOP_FLOAT 65000
#define NUMB_OF_FLOAT_VAR 40

template <typename Type>
class FloatPointType :
	public DataTypes<Type>
{
private:

	double Empty;
	double EmptyDiv;
	double EmptyIncDec;

	const double NUMERATOR = NUMBER_OF_VARIABLES * ITER_LOOP_FLOAT;

public:
	FloatPointType() : DataTypes<Type>() {}
	
	double EmptyLoop();
	double EmptyLoopDiv();

	double TestPlus();
	double TestMinus();
	double TestMult();
	double TestDiv();
	double TestIncrement();
	double TestDecrement();

	void SingleTest(double& _plus, double& _minus, double& _mult, double& _div, double& _inc, double& _dec);

	double EmptyLoopIncDec();

	~FloatPointType();
};




