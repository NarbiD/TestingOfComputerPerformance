#include <iostream>
#include <string>
#include <sstream>
#include "DataTypes.h"
#include <typeinfo>

using namespace std;

template<typename Type>
void DataTypes<Type>::Show(string sign, double OperationPerSec)
{
	column show;			//width of columns
	stringstream ost;		// stream of string
	string str = "";

	//print sign
	str += sign;
	for (int i = 0; i < (show.first - sign.length()); ++i)
		str += " ";

	//print type's name
	str += Name;
	for (int i = 0; i < (show.second - Name.length()); ++i)
		str += " ";

	//print number operation per second
	ost << OperationPerSec;
	str += ost.str();
	for (int i = 0; i < (show.third - ost.str().length()); ++i)
		str += " ";

	//print diagram
	int N = int(((OperationPerSec / MaxValue)*show.fourth));
	N = (N < 0 ? 0 : N);
	N = (N > show.fourth ? show.fourth : (N == 0 ? 1 : N));
	for (int i = 0; i < N; ++i)
		str += "X";
	for (int i = 0; i < (show.fourth - N + 1); ++i)
		str += " ";

	//print percent computing
	double percent = (OperationPerSec / MaxValue) * 100;
	if (percent < 1 && percent >= 0.01)
		percent = double(int(percent * 100)) / 100; //like 0.02
	else
		percent = int(percent); //floor
	ost.str("");
	ost << percent;
	for (int i = 0; i < (show.fifth - ost.str().length()); ++i)
		str += " ";
	str += ost.str();
	str += "%\n";

	cout << str;
}

template<typename Type>
DataTypes<Type>::DataTypes()
{
	Name = typeid(Type).name();

	a1 = (rand() % SCHAR_MAX) + 2; a2 = (rand() % SCHAR_MAX) + 2; a3 = (rand() % SCHAR_MAX) + 2; a4 = (rand() % SCHAR_MAX) + 2; a5 = (rand() % SCHAR_MAX) + 2;
	b1 = (rand() % SCHAR_MAX) + 2; b2 = (rand() % SCHAR_MAX) + 2; b3 = (rand() % SCHAR_MAX) + 2; b4 = (rand() % SCHAR_MAX) + 2; b5 = (rand() % SCHAR_MAX) + 2;
	c1 = (rand() % SCHAR_MAX) + 2; c2 = (rand() % SCHAR_MAX) + 2; c3 = (rand() % SCHAR_MAX) + 2; c4 = (rand() % SCHAR_MAX) + 2; c5 = (rand() % SCHAR_MAX) + 2;
	d1 = (rand() % SCHAR_MAX) + 2; d2 = (rand() % SCHAR_MAX) + 2; d3 = (rand() % SCHAR_MAX) + 2; d4 = (rand() % SCHAR_MAX) + 2; d5 = (rand() % SCHAR_MAX) + 2;
	e1 = (rand() % SCHAR_MAX) + 2; e2 = (rand() % SCHAR_MAX) + 2; e3 = (rand() % SCHAR_MAX) + 2; e4 = (rand() % SCHAR_MAX) + 2; e5 = (rand() % SCHAR_MAX) + 2;
	f1 = (rand() % SCHAR_MAX) + 2; f2 = (rand() % SCHAR_MAX) + 2; f3 = (rand() % SCHAR_MAX) + 2; f4 = (rand() % SCHAR_MAX) + 2; f5 = (rand() % SCHAR_MAX) + 2;
	g1 = (rand() % SCHAR_MAX) + 2; g2 = (rand() % SCHAR_MAX) + 2; g3 = (rand() % SCHAR_MAX) + 2; g4 = (rand() % SCHAR_MAX) + 2; g5 = (rand() % SCHAR_MAX) + 2;
	h1 = (rand() % SCHAR_MAX) + 2; h2 = (rand() % SCHAR_MAX) + 2; h3 = (rand() % SCHAR_MAX) + 2; h4 = (rand() % SCHAR_MAX) + 2; h5 = (rand() % SCHAR_MAX) + 2;
}

template<typename Type>
void DataTypes<Type>::ShowAll()
{
	SelectMaxValue();
	Show("+", Plus);
	Show("-", Minus);
	Show("*", Mult);
	Show("/", Div);
	cout << endl;
}

//select max value among time of all operation
template<typename Type>
void DataTypes<Type>::SelectMaxValue()
{
	MaxValue = Plus;
	if (MaxValue < Div) MaxValue = Div;
	if (MaxValue < Minus) MaxValue = Minus;
	if (MaxValue < Mult) MaxValue = Mult;
}



template<typename Type>
DataTypes<Type>::~DataTypes()
{
}
