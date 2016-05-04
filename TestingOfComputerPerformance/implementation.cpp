#include <iostream>
#include <ctime>
#include "implementation.h"
#include "Output.h"

using namespace std;

#define ITER_LOOP 1000000

template <typename T>
double SimpleEmptyLoop(T a1, T a2, T a3, T a4, T a5, T b1, T b2, T b3, T b4, T b5, T c1, T c2, T c3, T c4, T c5, 
	T d1, T d2, T d3, T d4, T d5, T e1, T e2, T e3, T e4, T e5, T f1, T f2, T f3, T f4, T f5, 
	T g1, T g2, T g3, T g4, T g5, T h1, T h2, T h3, T h4, T h5)
{

	// universal loop
	double StartTime = clock();
	for (int i = 0; i < ITER_LOOP; i++)
	{
			a1 = b2;	a2 = b2;	a3 = a4;	a4 = f4;	a5 = b5;
			b1 = a1;	b2 = c2;	b3 = h3;	b4 = f2;	b5 = b2;
			c1 = d1;	c2 = h2;	c3 = d4;	c4 = d4;	c5 = f1;
			d1 = a4;	d2 = g2;	d3 = a1;	d4 = b4;	d5 = c5;
			e1 = e2;	e2 = f3;	e3 = h1;	e4 = g1;	e5 = b1;
			f1 = g3;	f2 = g4;	f3 = e3;	f4 = g1;	f5 = b5;
			g1 = b1;	g2 = h2;	g3 = h3;	g4 = c2;	g5 = h5;
			h1 = a1;	h2 = e2;	h3 = f3;	h4 = a4;	h5 = e5;
	}
	return double(clock() - StartTime);
}


template <typename T>
double EmptyLoopMult(T a1, T a2, T a3, T a4, T a5, T b1, T b2, T b3, T b4, T b5, T c1, T c2, T c3, T c4, T c5,
	T d1, T d2, T d3, T d4, T d5, T e1, T e2, T e3, T e4, T e5, T f1, T f2, T f3, T f4, T f5,
	T g1, T g2, T g3, T g4, T g5, T h1, T h2, T h3, T h4, T h5) 
{
	T temp;
	double StartTimeMult = clock();
	for (int i = 0; i < ITER_LOOP; ++i)
	{
		temp = b2; a1 = (temp == 0 ? 5 : temp);	 temp = b2; a2 = (temp == 0 ? 7 : temp);  temp = a4; a3 = (temp == 0 ? 11 : temp);
		temp = f4; a4 = (temp == 0 ? 13 : temp); temp = b5; a5 = (temp == 0 ? 17 : temp);
		temp = a1; b1 = (temp == 0 ? 19 : temp); temp = c2; b2 = (temp == 0 ? 23 : temp); temp = h3; b3 = (temp == 0 ? 27 : temp);
		temp = f2; b4 = (temp == 0 ? 29 : temp); temp = b2; b5 = (temp == 0 ? 31 : temp);
		temp = d1; c1 = (temp == 0 ? 37 : temp); temp = h2; c2 = (temp == 0 ? 41 : temp); temp = d4; c3 = (temp == 0 ? 43 : temp);
		temp = d4; c4 = (temp == 0 ? 47 : temp); temp = f1; c5 = (temp == 0 ? 5 : temp);
		temp = a4; d1 = (temp == 0 ? 7 : temp);  temp = g2; d2 = (temp == 0 ? 11 : temp); temp = a1; d3 = (temp == 0 ? 13 : temp);
		temp = b4; d4 = (temp == 0 ? 17 : temp); temp = c5; d5 = (temp == 0 ? 19 : temp);
		temp = e2; e1 = (temp == 0 ? 23 : temp); temp = f3; e2 = (temp == 0 ? 27 : temp); temp = h1; e3 = (temp == 0 ? 29 : temp);
		temp = g1; e4 = (temp == 0 ? 31 : temp); temp = b1; e5 = (temp == 0 ? 37 : temp);
		temp = g3; f1 = (temp == 0 ? 41 : temp); temp = g4; f2 = (temp == 0 ? 43 : temp); temp = e3; f3 = (temp == 0 ? 47 : temp);
		temp = g1; f4 = (temp == 0 ? 5 : temp);  temp = b5; f5 = (temp == 0 ? 7 : temp);
		temp = b1; g1 = (temp == 0 ? 11 : temp); temp = h2; g2 = (temp == 0 ? 13 : temp); temp = h3; g3 = (temp == 0 ? 17 : temp);
		temp = c2; g4 = (temp == 0 ? 19 : temp); temp = h5; g5 = (temp == 0 ? 23 : temp);
		temp = a1; h1 = (temp == 0 ? 27 : temp); temp = e2; h2 = (temp == 0 ? 29 : temp); temp = f3; h3 = (temp == 0 ? 31 : temp);
		temp = a4; h4 = (temp == 0 ? 41 : temp); temp = e5; h5 = (temp == 0 ? 43 : temp);
	}
	return double(clock() - StartTimeMult);
}


template <typename T>
double EmptyLoopDiv(T a1, T a2, T a3, T a4, T a5, T b1, T b2, T b3, T b4, T b5, T c1, T c2, T c3, T c4, T c5,
	T d1, T d2, T d3, T d4, T d5, T e1, T e2, T e3, T e4, T e5, T f1, T f2, T f3, T f4, T f5,
	T g1, T g2, T g3, T g4, T g5, T h1, T h2, T h3, T h4, T h5)
{
	double StartTimeDiv = clock();
	for (int i = 0; i < ITER_LOOP; ++i)
	{
		a1 = (c2 == 0 ? 5 : c2);  a2 = (d2 == 0 ? 7 : d2);  a3 = (c3 == 0 ? 11 : c3); a4 = (d5 == 0 ? 13 : d5); a5 = (g3 == 0 ? 17 : g3);
		b1 = (b3 == 0 ? 19 : b3); b2 = (d5 == 0 ? 23 : d5); b3 = (e3 == 0 ? 27 : e3); b4 = (a4 == 0 ? 29 : a4); b5 = (d5 == 0 ? 31 : d5);
		c1 = (e5 == 0 ? 37 : e5); c2 = (f2 == 0 ? 41 : f2); c3 = (a3 == 0 ? 43 : a3); c4 = (c1 == 0 ? 47 : c1); c5 = (f5 == 0 ? 5 : f5);
		d1 = (a1 == 0 ? 7 : a1);  d2 = (f3 == 0 ? 11 : f3);	d3 = (b5 == 0 ? 13 : b5); d4 = (h4 == 0 ? 17 : h4); d5 = (b1 == 0 ? 19 : b1);
		e1 = (e3 == 0 ? 23 : e3); e2 = (g2 == 0 ? 27 : g2); e3 = (h3 == 0 ? 29 : h3); e4 = (a4 == 0 ? 31 : a4); e5 = (c5 == 0 ? 37 : c5);
		f1 = (h5 == 0 ? 41 : h5); f2 = (h1 == 0 ? 43 : h1); f3 = (e5 == 0 ? 47 : e5); f4 = (h4 == 0 ? 5 : h4);  f5 = (c2 == 0 ? 7 : c2);
		g1 = (e2 == 0 ? 11 : e2); g2 = (e3 == 0 ? 13 : e3); g3 = (e4 == 0 ? 17 : e4); g4 = (e5 == 0 ? 19 : e5); g5 = (e5 == 0 ? 23 : e5);
		h1 = (b1 == 0 ? 27 : b1); h2 = (f5 == 0 ? 29 : f5); h3 = (f2 == 0 ? 31 : f2); h4 = (a1 == 0 ? 41 : a1); h5 = (h5 == 0 ? 43 : h5);
	}
	return double(clock() - StartTimeDiv);
}

void testInt()
{
#pragma region INT_DEFINITION
	dataType Int;
	const char M_INT = INT_MAX - 2;
	int a1 = (rand() % M_INT) + 2, a2 = (rand() % M_INT) + 2, a3 = (rand() % M_INT) + 2, a4 = (rand() % M_INT) + 2, a5 = (rand() % M_INT) + 2;
	int b1 = (rand() % M_INT) + 2, b2 = (rand() % M_INT) + 2, b3 = (rand() % M_INT) + 2, b4 = (rand() % M_INT) + 2, b5 = (rand() % M_INT) + 2;
	int c1 = (rand() % M_INT) + 2, c2 = (rand() % M_INT) + 2, c3 = (rand() % M_INT) + 2, c4 = (rand() % M_INT) + 2, c5 = (rand() % M_INT) + 2;
	int d1 = (rand() % M_INT) + 2, d2 = (rand() % M_INT) + 2, d3 = (rand() % M_INT) + 2, d4 = (rand() % M_INT) + 2, d5 = (rand() % M_INT) + 2;
	int e1 = (rand() % M_INT) + 2, e2 = (rand() % M_INT) + 2, e3 = (rand() % M_INT) + 2, e4 = (rand() % M_INT) + 2, e5 = (rand() % M_INT) + 2;
	int f1 = (rand() % M_INT) + 2, f2 = (rand() % M_INT) + 2, f3 = (rand() % M_INT) + 2, f4 = (rand() % M_INT) + 2, f5 = (rand() % M_INT) + 2;
	int g1 = (rand() % M_INT) + 2, g2 = (rand() % M_INT) + 2, g3 = (rand() % M_INT) + 2, g4 = (rand() % M_INT) + 2, g5 = (rand() % M_INT) + 2;
	int h1 = (rand() % M_INT) + 2, h2 = (rand() % M_INT) + 2, h3 = (rand() % M_INT) + 2, h4 = (rand() % M_INT) + 2, h5 = (rand() % M_INT) + 2;

	const double EmptyIntLoop = SimpleEmptyLoop(a1, a2, a3, a4, a5, b1, b2, b3, b4, b5, c1, c2, c3, c4, c5,
		d1, d2, d3, d4, d5, e1, e2, e3, e4, e5, f1, f2, f3, f4, f5, g1, g2, g3, g4, g5, h1, h2, h3, h4, h5);
#pragma endregion

#pragma region EMPTY_INT_LOOPS
	const double EmptyIntLoop = SimpleEmptyLoop(a1, a2, a3, a4, a5, b1, b2, b3, b4, b5, c1, c2, c3, c4, c5,
		d1, d2, d3, d4, d5, e1, e2, e3, e4, e5, f1, f2, f3, f4, f5, g1, g2, g3, g4, g5, h1, h2, h3, h4, h5);

	const double MultIntLoop = EmptyLoopMult(a1, a2, a3, a4, a5, b1, b2, b3, b4, b5, c1, c2, c3, c4, c5,
		d1, d2, d3, d4, d5, e1, e2, e3, e4, e5, f1, f2, f3, f4, f5, g1, g2, g3, g4, g5, h1, h2, h3, h4, h5);

	const double DivIntLoop = EmptyLoopDiv(a1, a2, a3, a4, a5, b1, b2, b3, b4, b5, c1, c2, c3, c4, c5,
		d1, d2, d3, d4, d5, e1, e2, e3, e4, e5, f1, f2, f3, f4, f5, g1, g2, g3, g4, g5, h1, h2, h3, h4, h5);
#pragma endregion

	return;
}

void testLong()
{

	return;
}

void testChar()
{
#pragma region CHAR_DEFINITION
	dataType Char;
	const char M_CH = SCHAR_MAX - 2;
	char a1 = (rand() % M_CH) + 2, a2 = (rand() % M_CH) + 2, a3 = (rand() % M_CH) + 2, a4 = (rand() % M_CH) + 2, a5 = (rand() % M_CH) + 2;
	char b1 = (rand() % M_CH) + 2, b2 = (rand() % M_CH) + 2, b3 = (rand() % M_CH) + 2, b4 = (rand() % M_CH) + 2, b5 = (rand() % M_CH) + 2;
	char c1 = (rand() % M_CH) + 2, c2 = (rand() % M_CH) + 2, c3 = (rand() % M_CH) + 2, c4 = (rand() % M_CH) + 2, c5 = (rand() % M_CH) + 2;
	char d1 = (rand() % M_CH) + 2, d2 = (rand() % M_CH) + 2, d3 = (rand() % M_CH) + 2, d4 = (rand() % M_CH) + 2, d5 = (rand() % M_CH) + 2;
	char e1 = (rand() % M_CH) + 2, e2 = (rand() % M_CH) + 2, e3 = (rand() % M_CH) + 2, e4 = (rand() % M_CH) + 2, e5 = (rand() % M_CH) + 2;
	char f1 = (rand() % M_CH) + 2, f2 = (rand() % M_CH) + 2, f3 = (rand() % M_CH) + 2, f4 = (rand() % M_CH) + 2, f5 = (rand() % M_CH) + 2;
	char g1 = (rand() % M_CH) + 2, g2 = (rand() % M_CH) + 2, g3 = (rand() % M_CH) + 2, g4 = (rand() % M_CH) + 2, g5 = (rand() % M_CH) + 2;
	char h1 = (rand() % M_CH) + 2, h2 = (rand() % M_CH) + 2, h3 = (rand() % M_CH) + 2, h4 = (rand() % M_CH) + 2, h5 = (rand() % M_CH) + 2;
#pragma endregion

#pragma region EMPTY_CHAR_LOOPS
	const double EmptyCharLoop = SimpleEmptyLoop(a1, a2, a3, a4, a5, b1, b2, b3, b4, b5, c1, c2, c3, c4, c5,
		d1, d2, d3, d4, d5, e1, e2, e3, e4, e5, f1, f2, f3, f4, f5, g1, g2, g3, g4, g5, h1, h2, h3, h4, h5);

	const double MultCharLoop = EmptyLoopMult(a1, a2, a3, a4, a5, b1, b2, b3, b4, b5, c1, c2, c3, c4, c5,
		d1, d2, d3, d4, d5, e1, e2, e3, e4, e5, f1, f2, f3, f4, f5, g1, g2, g3, g4, g5, h1, h2, h3, h4, h5);

	const double DivCharLoop = EmptyLoopDiv(a1, a2, a3, a4, a5, b1, b2, b3, b4, b5, c1, c2, c3, c4, c5,
		d1, d2, d3, d4, d5, e1, e2, e3, e4, e5, f1, f2, f3, f4, f5, g1, g2, g3, g4, g5, h1, h2, h3, h4, h5);
#pragma endregion

#pragma region CHAR+

	const double StartCharPlus = clock();
	for (int i = 0; i < ITER_LOOP; ++i)
	{
		a1 = b2 + c2;	a2 = b2 + d2;	a3 = a4 + c3;	a4 = f4 + d5;	a5 = b5 + g3;
		b1 = a1 + b3;	b2 = c2 + d5;	b3 = h3 + e3;	b4 = f2 + a4;	b5 = b2 + d5;
		c1 = d1 + e5;	c2 = h2 + f2;	c3 = d4 + a3;	c4 = d4 + c1;	c5 = f1 + f5;
		d1 = a4 + a1;	d2 = g2 + f3;	d3 = a1 + b5;	d4 = b4 + h4;	d5 = c5 + b1;
		e1 = e2 + e3;	e2 = f3 + g2;	e3 = h1 + h3;	e4 = g1 + a4;	e5 = b1 + c5;
		f1 = g3 + h5;	f2 = g4 + h1;	f3 = e3 + e5;	f4 = g1 + h4;	f5 = b5 + c2;
		g1 = b1 + e2;	g2 = h2 + e3;	g3 = h3 + e4;	g4 = c2 + e5;	g5 = h5 + e5;
		h1 = a1 + b1;	h2 = e2 + f5;	h3 = f3 + f2;	h4 = a4 + a1;	h5 = e5 + h5;
	}
	Char.Plus = clock() - StartCharPlus;
#pragma endregion

#pragma region CHAR-

	const double StartCharMinus = clock();
	for (int i = 0; i < ITER_LOOP; ++i)
	{
		a1 = b2 - c2;	a2 = b2 - d2;	a3 = a4 - c3;	a4 = f4 - d5;	a5 = b5 - g3;
		b1 = a1 - b3;	b2 = c2 - d5;	b3 = h3 - e3;	b4 = f2 - a4;	b5 = b2 - d5;
		c1 = d1 - e5;	c2 = h2 - f2;	c3 = d4 - a3;	c4 = d4 - c1;	c5 = f1 - f5;
		d1 = a4 - a1;	d2 = g2 - f3;	d3 = a1 - b5;	d4 = b4 - h4;	d5 = c5 - b1;
		e1 = e2 - e3;	e2 = f3 - g2;	e3 = h1 - h3;	e4 = g1 - a4;	e5 = b1 - c5;
		f1 = g3 - h5;	f2 = g4 - h1;	f3 = e3 - e5;	f4 = g1 - h4;	f5 = b5 - c2;
		g1 = b1 - e2;	g2 = h2 - e3;	g3 = h3 - e4;	g4 = c2 - e5;	g5 = h5 - e5;
		h1 = a1 - b1;	h2 = e2 - f5;	h3 = f3 - f2;	h4 = a4 - a1;	h5 = e5 - h5;
	}
	Char.Minus = clock() - StartCharMinus;
#pragma endregion

#pragma region CHAR*

	const double StartCharMult = clock();
	for (int i = 0; i < ITER_LOOP; ++i)
	{
		temp = b2*c2; a1 = (temp == 0 ? 5 : temp); 	temp = b2*d2; a2 = (temp == 0 ? 7 : temp); temp = a4*c3; a3 = (temp == 0 ? 11 : temp);
		temp = f4*d5; a4 = (temp == 0 ? 13 : temp);	temp = b5*g3; a5 = (temp == 0 ? 17 : temp);	
		temp = a1*b3; b1 = (temp == 0 ? 19 : temp);	temp = c2*d5; b2 = (temp == 0 ? 23 : temp);	temp = h3*e3; b3 = (temp == 0 ? 27 : temp);	
		temp = f2*a4; b4 = (temp == 0 ? 29 : temp);	temp = b2*d5; b5 = (temp == 0 ? 31 : temp);	
		temp = d1*e5; c1 = (temp == 0 ? 37 : temp);	temp = h2*f2; c2 = (temp == 0 ? 41 : temp);	temp = d4*a3; c3 = (temp == 0 ? 43 : temp);
		temp = d4*c1; c4 = (temp == 0 ? 47 : temp);	temp = f1*f5; c5 = (temp == 0 ? 5 : temp);
		temp = a4*a1; d1 = (temp == 0 ? 7 : temp);	temp = g2*f3; d2 = (temp == 0 ? 11 : temp);	temp = a1*b5; d3 = (temp == 0 ? 13 : temp);
		temp = b4*h4; d4 = (temp == 0 ? 17 : temp);	temp = c5*d1; d5 = (temp == 0 ? 19 : temp);
		temp = e2*e3; e1 = (temp == 0 ? 23 : temp);	temp = f3*g2; e2 = (temp == 0 ? 27 : temp);	temp = h1*h3; e3 = (temp == 0 ? 29 : temp);
		temp = g1*a4; e4 = (temp == 0 ? 31 : temp);	temp = b1*c5; e5 = (temp == 0 ? 37 : temp);
		temp = g3*h5; f1 = (temp == 0 ? 41 : temp);	temp = g4*h1; f2 = (temp == 0 ? 43 : temp);	temp = e3*e5; f3 = (temp == 0 ? 47 : temp);
		temp = g1*h4; f4 = (temp == 0 ? 5 : temp);	temp = b5*c2; f5 = (temp == 0 ? 7 : temp);
		temp = b1*e2; g1 = (temp == 0 ? 11 : temp);	temp = h2*e3; g2 = (temp == 0 ? 13 : temp); temp = h3*e4; g3 = (temp == 0 ? 17 : temp);
		temp = c2*e5; g4 = (temp == 0 ? 19 : temp);	temp = h5*e5; g5 = (temp == 0 ? 23 : temp);
		temp = a1*b2; h1 = (temp == 0 ? 27 : temp);	temp = e2*f5; h2 = (temp == 0 ? 29 : temp);	temp = f3*f2; h3 = (temp == 0 ? 31 : temp);
		temp = a4*a1; h4 = (temp == 0 ? 41 : temp);	temp = e5*h5; h5 = (temp == 0 ? 43 : temp);
	}
	Char.Mult = clock() - StartCharMult;
#pragma endregion

#pragma region CHAR/

	const double StartCharDiv = clock();
	for (int i = 0; i < ITER_LOOP; ++i)
	{
		a1 = a2 / (c2 == 0 ? 5 : c2);   a2 = b2 / (d2 == 0 ? 7 : d2);	a3 = a4 / (c3 == 0 ? 11 : c3);
		a4 = f4 / (d5 == 0 ? 13 : d5);  a5 = b5 / (g3 == 0 ? 17 : g3);
		b1 = a1 / (b3 == 0 ? 19 : b3);  b2 = c2 / (d5 == 0 ? 23 : d5);	b3 = h3 / (e3 == 0 ? 27 : e3);
		b4 = f2 / (a4 == 0 ? 29 : a4);  b5 = b2 / (d5 == 0 ? 31 : d5);
		c1 = d1 / (e5 == 0 ? 37 : e5);	c2 = h2 / (f2 == 0 ? 41 : f2);	c3 = d4 / (a3 == 0 ? 43 : a3);
		c4 = d4 / (c1 == 0 ? 47 : c1);	c5 = f1 / (f5 == 0 ? 5 : f5);
		d1 = a4 / (a1 == 0 ? 7 : a1);	d2 = g2 / (f3 == 0 ? 11 : f3);	d3 = a1 / (b5 == 0 ? 13 : b5);
		d4 = b4 / (h4 == 0 ? 17 : h4);	d5 = c5 / (b1 == 0 ? 19 : b1);
		e1 = e2 / (e3 == 0 ? 23 : e3);	e2 = f3 / (g2 == 0 ? 27 : g2);	e3 = h1 / (h3 == 0 ? 29 : h3);
		e4 = g1 / (a4 == 0 ? 31 : a4);	e5 = b1 / (c5 == 0 ? 37 : c5);
		f1 = g3 / (h5 == 0 ? 41 : h5);	f2 = g4 / (h1 == 0 ? 43 : h1);	f3 = e3 / (e5 == 0 ? 47 : e5);
		f4 = g1 / (h4 == 0 ? 5 : h4);	f5 = b5 / (c2 == 0 ? 7 : c2);
		g1 = b1 / (e2 == 0 ? 11 : e2);	g2 = h2 / (e3 == 0 ? 13 : e3);	g3 = h3 / (e4 == 0 ? 17 : e4);
		g4 = c2 / (e5 == 0 ? 19 : e5);	g5 = h5 / (e5 == 0 ? 23 : e5);
		h1 = a1 / (b1 == 0 ? 27 : b1);	h2 = e2 / (f5 == 0 ? 29 : f5);	h3 = f3 / (f2 == 0 ? 31 : f2);
		h4 = a4 / (a1 == 0 ? 41 : a1);	h5 = e5 / (h5 == 0 ? 43 : h5);
	}
	Char.Div = clock() - StartCharDiv;
#pragma endregion

	return;
}

void testFloat()
{

	return;
}

void testDouble()
{

	return;
}