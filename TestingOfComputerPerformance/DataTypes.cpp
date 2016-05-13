//
// Created by NarbiD on 21.02.16.
// Copyright (c) 2016 Denis Ignashov. All rights reserved.
//


#include <iostream>
#include <string>
#include <sstream>
#include "DataTypes.h"
#include <typeinfo>
#include <cstdlib>

using namespace std;

template<typename Type>
DataTypes<Type>::DataTypes()
{
	Initialization();
}

template<typename Type>
void DataTypes<Type>::Initialization()
{
	Name = typeid(Type).name();

	srand(time(NULL));
	a1 = (rand() % SCHAR_MAX) + 2; a2 = (rand() % SCHAR_MAX) + 2; a3 = (rand() % SCHAR_MAX) + 2; a4 = (rand() % SCHAR_MAX) + 2; a5 = (rand() % SCHAR_MAX) + 2;
	b1 = (rand() % SCHAR_MAX) + 2; b2 = (rand() % SCHAR_MAX) + 2; b3 = (rand() % SCHAR_MAX) + 2; b4 = (rand() % SCHAR_MAX) + 2; b5 = (rand() % SCHAR_MAX) + 2;
	c1 = (rand() % SCHAR_MAX) + 2; c2 = (rand() % SCHAR_MAX) + 2; c3 = (rand() % SCHAR_MAX) + 2; c4 = (rand() % SCHAR_MAX) + 2; c5 = (rand() % SCHAR_MAX) + 2;
	d1 = (rand() % SCHAR_MAX) + 2; d2 = (rand() % SCHAR_MAX) + 2; d3 = (rand() % SCHAR_MAX) + 2; d4 = (rand() % SCHAR_MAX) + 2; d5 = (rand() % SCHAR_MAX) + 2;
	a6 = (rand() % SCHAR_MAX) + 2; a7 = (rand() % SCHAR_MAX) + 2; a8 = (rand() % SCHAR_MAX) + 2; a9 = (rand() % SCHAR_MAX) + 2; a0 = (rand() % SCHAR_MAX) + 2;
	b6 = (rand() % SCHAR_MAX) + 2; b7 = (rand() % SCHAR_MAX) + 2; b8 = (rand() % SCHAR_MAX) + 2; b9 = (rand() % SCHAR_MAX) + 2; b0 = (rand() % SCHAR_MAX) + 2;
	c6 = (rand() % SCHAR_MAX) + 2; c7 = (rand() % SCHAR_MAX) + 2; c8 = (rand() % SCHAR_MAX) + 2; c9 = (rand() % SCHAR_MAX) + 2; c0 = (rand() % SCHAR_MAX) + 2;
	d6 = (rand() % SCHAR_MAX) + 2; d7 = (rand() % SCHAR_MAX) + 2; d8 = (rand() % SCHAR_MAX) + 2; d9 = (rand() % SCHAR_MAX) + 2; d0 = (rand() % SCHAR_MAX) + 2;
}



template<typename Type>
void DataTypes<Type>::Show(string _sign, double _OperationPerSec)
{
	columns _column;
	stringstream _ost;
	string _output = "";

	double _percent = (_OperationPerSec / MaxValue) * 100.0;
	int _length = int(_percent / 2);

	//add sign to output
	_output += _sign;

	for (int i = 0, end = _column.first - _sign.length(); i < end; ++i)
		_output += " ";

	//add type's name to output
	_output += Name;
	for (int i = 0, end = _column.second - Name.length(); i < end; ++i)
		_output += " ";

	//add number operation per second to print
	_ost << _OperationPerSec;
	_output += _ost.str();

	for (int i = 0, end = _column.third - _ost.str().length(); i < end; ++i)
		_output += " ";

	//add diagram to print
	if (_length > _column.fourth) _length = _column.fourth;
	if (_length < 2) _length = 1;

	for (int i = 0; i < _length; ++i)
		_output += "X";
	for (int i = 0, end = _column.fourth - _length + 1; i < end; ++i)
		_output += " ";

	//print percent computing
	if (_percent < 1.0 && _percent >= 0.01)
		_percent = floor(_percent * 100) / 100.0;
	else
		_percent = floor(_percent);

	_ost.str("");
	_ost << _percent;
	_output += _ost.str() + "%\n";

	cout << _output;
}

template<typename Type>
void DataTypes<Type>::ShowAll()
{
	//select max value
	MaxValue = Plus;
	if (MaxValue < Div) MaxValue = Div;
	if (MaxValue < Minus) MaxValue = Minus;
	if (MaxValue < Mult) MaxValue = Mult;

	//print results
	Show("+", Plus);
	Show("-", Minus);
	Show("*", Mult);
	Show("/", Div);
	cout << endl;
	Show("++", Increment);
	Show("--", Decrement);
	cout << endl;
}

template<typename Type>
double DataTypes<Type>::SelectAverage(double *_arr, int _n)
{
	double _sum = 0.0;

	for (int i = 0; i < _n; ++i)
		_sum += _arr[i];

	return _sum / (double)_n;
}

template<typename Type>
void DataTypes<Type>::Test(int precision)
{
	//array with results of test operations
	//every element in array is time of one test for one operation
	double* setPlus = new double[precision];
	double* setMinus = new double[precision];
	double* setMult = new double[precision];
	double* setDiv = new double[precision];
	double* setInc = new double[precision];
	double* setDec = new double[precision];

	for (int i = 0; i < precision; ++i)
	{
		SingleTest(setPlus[i], setMinus[i], setMult[i], setDiv[i], setInc[i], setDec[i]);
		Plus = SelectAverage(setPlus, precision);
		Minus = SelectAverage(setMinus, precision);
		Mult = SelectAverage(setMult, precision);
		Div = SelectAverage(setDiv, precision);
		Increment = SelectAverage(setInc, precision);
		Decrement = SelectAverage(setInc, precision);
	}

	delete[] setPlus;
	delete[] setMinus;
	delete[] setMult;
	delete[] setDiv;
	delete[] setInc;
	delete[] setDec;
}

template<typename Type>
DataTypes<Type>::~DataTypes()
{
}
