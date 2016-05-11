#pragma once
#include <iostream>
#include "DataTypes.h"

#define ITER_LOOP 100000
#define NUMB_OF_INT_VAR 40

template <typename Type>
class IntegralType :
	public DataTypes<Type>
{
private:

	double Empty;
	double EmptyMult;
	double EmptyDiv;

public:
	IntegralType() : DataTypes<Type>() {}
	
	double EmptyLoop();
	double EmptyLoopMult();
	double EmptyLoopDiv();

	double TestPlus();
	double TestMinus();
	double TestMult();
	double TestDiv();

	void Retest(double& plus, double& minus, double& mult, double& div);

	//void SelectAverage(double * arr);

	//void Test();
	
	~IntegralType();
};