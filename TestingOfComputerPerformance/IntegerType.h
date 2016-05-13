//
// Created by NarbiD on 21.02.16.
// Copyright (c) 2016 Denis Ignashov. All rights reserved.
//


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
	double EmptyIncDec;

	const double NUMERATOR = NUMBER_OF_VARIABLES * ITER_LOOP;

public:
	IntegerType() : DataTypes<Type>() {}
	
	double EmptyLoop();
	double EmptyLoopMult();
	double EmptyLoopDiv();
	double EmptyLoopIncDec();

	double TestPlus();
	double TestMinus();
	double TestMult();
	double TestDiv();
	double TestIncrement();
	double TestDecrement();

	void SingleTest(double& _plus, double& _minus, double& _mult, double& _div, double& _inc, double& _dec);

	
	~IntegerType();
};