#pragma once
#include "DataTypes.h"

#define DEVINDER 127

template <typename Type>
class FloatPointType :
	public DataTypes<Type>
{
public:
	FloatPointType<Type>(std::string) : DataTypes<Type>(std::string);

	double EmptyLoop();
	double EmptyLoopDiv();

	double TestPlus();
	double TestMinus();
	double TestMult();
	double TestDiv();

	~FloatPointType();
};

