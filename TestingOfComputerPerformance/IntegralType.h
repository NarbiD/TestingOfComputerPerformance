#pragma once
#include "DataTypes.h"

#define ITER_LOOP 100000

template <typename Type>
class IntegralType :
	public DataTypes<Type>
{

public:
	IntegralType<Type>(std::string) : DataTypes<Type>(std::string);

	double EmptyLoop();
	double EmptyLoopMult();
	double EmptyLoopDiv();

	double TestPlus();
	double TestMinus();
	double TestMult();
	double TestDivIntegral();


	~IntegralType();
};

