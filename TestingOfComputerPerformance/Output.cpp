#include <iostream>
#include <sstream>
#include "Output.h"

using namespace std;

void SelectMaxValue(dataType& type)
{
	type.MaxValue = type.Div;
	if (type.MaxValue < type.Plus) type.MaxValue = type.Plus;
	if (type.MaxValue < type.Minus) type.MaxValue = type.Minus;
	if (type.MaxValue < type.Mult) type.MaxValue = type.Mult;
}

void Show(string sign, string type, double value, double max_value)
{
	column show;			//width of columns
	stringstream ost;		// stream of string
	string str = "";

	//print sign
	str += sign;
	for (int i = 0; i < (show.first - sign.length()); ++i)
		str += " ";

	//print type's name
	str += type;
	for (int i = 0; i < (show.second - type.length()); ++i)
		str += " ";

	//print number operation per second
	ost << value;
	str += ost.str();
	for (int i = 0; i < (show.third - ost.str().length()); ++i)
		str += " ";

	//print diagram
	int N = int(((value / max_value)*show.fourth));
	N = (N < 0 ? 0 : N);
	N = (N > show.fourth? show.fourth : (N == 0 ? 1 : N));
	for (int i = 0; i < N; ++i)
		str += "X";
	for (int i = 0; i < (show.fourth - N + 1); ++i)
		str += " ";

	//print percent computing
	double percent = (value / max_value) * 100;
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