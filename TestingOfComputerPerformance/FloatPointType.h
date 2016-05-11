#pragma once
#include "DataTypes.h"

#define DEVIDER 5000
#define ITER_LOOP_FLOAT 65000
#define NUMB_OF_FLOAT_VAR 40

template <typename Type>
class FloatPointType :
	public DataTypes<Type>
{
private:

	double Empty;
	double EmptyDiv;

	const double NUMERATOR = NUMBER_OF_VARIABLES * ITER_LOOP_FLOAT;
public:
	FloatPointType() : DataTypes<Type>() {}
	
	double EmptyLoop();
	double EmptyLoopDiv();

	double TestPlus();
	double TestMinus();
	double TestMult();
	double TestDiv();

	void Retest(double& _plus, double& _minus, double& _mult, double& _div);

	~FloatPointType();
};




