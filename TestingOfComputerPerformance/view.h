#pragma once
#include <iostream>
#include <string>

using namespace std;

struct dataType 
{
	//operations time
	double Plus;
	double Minus;
	double Mult;
	double Div;
	double MaxValue;
};

struct column 
{
	const int first = 5;		//sign of operation
	const int second = 8;		//type name
	const int third = 13;		//number operation per second
	const int fourth = 48;		//diagram
	const int fifth = 5;		//percentage
};

void StartMenu(bool& status);
void SelectMaxValue(dataType& type);	//definition MaxValue
void Show(string sign, string type, double opPerSec, double maxValue);
void ShowAll(dataType &type);	//show all operations with this type