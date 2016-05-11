#pragma once
#include <iostream>
#include "DataTypes.h"

#define ITER_LOOP 100000

template <typename Type>
class IntegerType :
	public DataTypes<Type>
{
private:

	double Empty;
	double EmptyMult;
	double EmptyDiv;

	const double NUMERATOR = NUMBER_OF_VARIABLES * ITER_LOOP;
public:
	IntegerType() : DataTypes<Type>() {}
	
	double EmptyLoop();
	double EmptyLoopMult();
	double EmptyLoopDiv();

	double TestPlus();
	double TestMinus();
	double TestMult();
	double TestDiv();

	void Retest(double& _plus, double& _minus, double& _mult, double& _div);
	
	~IntegerType();
};