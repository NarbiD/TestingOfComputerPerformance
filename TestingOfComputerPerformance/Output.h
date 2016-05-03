#pragma once
#include <iostream>

struct dataType 
{
	double Plus;
	double Minus;
	double Mult;
	double Div;
	double MaxValue;
};

void SelectMaxValue(dataType& type)
{
	type.MaxValue = type.Div;
	if (type.MaxValue < type.Plus) type.MaxValue = type.Plus;
	if (type.MaxValue < type.Minus) type.MaxValue = type.Minus;
	if (type.MaxValue < type.Mult) type.MaxValue = type.Mult;
	
}