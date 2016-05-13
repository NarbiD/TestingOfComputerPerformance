//
// Created by NarbiD on 21.02.16.
// Copyright (c) 2016 Denis Ignashov. All rights reserved.
//


#include "FloatPointType.h"

using namespace std::chrono;


template <typename Type>
double FloatPointType<Type>::EmptyLoop()
{
	StartTime = high_resolution_clock::now();

	for (long i = 0; i < ITER_LOOP_FLOAT; ++i)
	{
		a1 = fmod(b1, DEVIDER) + 2;	a2 = fmod(b2, DEVIDER) + 3;	a3 = fmod(a4, DEVIDER) + 4;	a4 = fmod(b9, DEVIDER) + 5;	a5 = fmod(b5, DEVIDER) + 6;
		b1 = fmod(a1, DEVIDER) + 7;	b2 = fmod(c2, DEVIDER) + 8;	b3 = fmod(d8, DEVIDER) + 9;	b4 = fmod(b7, DEVIDER) + 2;	b5 = fmod(b2, DEVIDER) + 3;
		c1 = fmod(d1, DEVIDER) + 4;	c2 = fmod(d7, DEVIDER) + 5;	c3 = fmod(d4, DEVIDER) + 6;	c4 = fmod(d4, DEVIDER) + 7;	c5 = fmod(b6, DEVIDER) + 8;
		d1 = fmod(a4, DEVIDER) + 9;	d2 = fmod(c7, DEVIDER) + 2;	d3 = fmod(a1, DEVIDER) + 3;	d4 = fmod(b4, DEVIDER) + 4;	d5 = fmod(c5, DEVIDER) + 5;
		a6 = fmod(a7, DEVIDER) + 6;	a7 = fmod(b8, DEVIDER) + 7;	a8 = fmod(d6, DEVIDER) + 8;	a9 = fmod(c6, DEVIDER) + 9;	a0 = fmod(b1, DEVIDER) + 2;
		b6 = fmod(c8, DEVIDER) + 3;	b7 = fmod(c9, DEVIDER) + 4;	b8 = fmod(a8, DEVIDER) + 5;	b9 = fmod(c6, DEVIDER) + 6;	b0 = fmod(b5, DEVIDER) + 7;
		c6 = fmod(b1, DEVIDER) + 8;	c7 = fmod(d7, DEVIDER) + 9;	c8 = fmod(d8, DEVIDER) + 2;	c9 = fmod(c2, DEVIDER) + 3;	c0 = fmod(d0, DEVIDER) + 4;
		d6 = fmod(a1, DEVIDER) + 5;	d7 = fmod(a7, DEVIDER) + 6;	d8 = fmod(b8, DEVIDER) + 7;	d9 = fmod(a4, DEVIDER) + 8;	d0 = fmod(a0, DEVIDER) + 9;
	}

	FinishTime = high_resolution_clock::now();
	duration<double> result = duration_cast<duration<double>>(FinishTime - StartTime);
	return result.count();
}

template <typename Type>
double FloatPointType<Type>::EmptyLoopIncDec()
{
	StartTime = high_resolution_clock::now();

	for (int i = 0; i < ITER_LOOP; ++i)
	{
		a1; b2;	a2; b2;	a3; a4;	a4; b9;	a5; b5;
		b1; a1;	b2; c2;	b3; d8;	b4; b7;	b5; b2;
		c1; d1;	c2; d7;	c3; d4;	c4; d4;	c5; b6;
		d1; a4;	d2; c7;	d3; a1;	d4; b4;	d5; c5;
	}

	FinishTime = high_resolution_clock::now();
	duration<double> result = duration_cast<duration<double>>(FinishTime - StartTime);
	return result.count();
}

template <typename Type>
double FloatPointType<Type>::EmptyLoopDiv()
{
	StartTime = high_resolution_clock::now();

	for (long i = 0; i < ITER_LOOP_FLOAT; ++i)
	{

		a1 = (c2 == 0 ? 5 : c2);  a2 = (d2 == 0 ? 7 : d2);  a3 = (c3 == 0 ? 11 : c3); a4 = (d5 == 0 ? 13 : d5); a5 = (c8 == 0 ? 17 : c8);
		b1 = (b3 == 0 ? 19 : b3); b2 = (d5 == 0 ? 23 : d5); b3 = (a8 == 0 ? 27 : a8); b4 = (a4 == 0 ? 29 : a4); b5 = (d5 == 0 ? 31 : d5);
		c1 = (a0 == 0 ? 37 : a0); c2 = (b7 == 0 ? 41 : b7); c3 = (a3 == 0 ? 43 : a3); c4 = (c1 == 0 ? 47 : c1); c5 = (b0 == 0 ? 5 : b0);
		d1 = (a1 == 0 ? 7 : a1);  d2 = (b8 == 0 ? 11 : b8);	d3 = (b5 == 0 ? 13 : b5); d4 = (d9 == 0 ? 17 : d9); d5 = (b1 == 0 ? 19 : b1);
		a6 = (a8 == 0 ? 23 : a8); a7 = (c7 == 0 ? 27 : c7); a8 = (d8 == 0 ? 29 : d8); a9 = (a4 == 0 ? 31 : a4); a0 = (c5 == 0 ? 37 : c5);
		b6 = (d0 == 0 ? 41 : d0); b7 = (d6 == 0 ? 43 : d6); b8 = (a0 == 0 ? 47 : a0); b9 = (d9 == 0 ? 5 : d9);  b0 = (c2 == 0 ? 7 : c2);
		c6 = (a7 == 0 ? 11 : a7); c7 = (a8 == 0 ? 13 : a8); c8 = (a9 == 0 ? 17 : a9); c9 = (a0 == 0 ? 19 : a0); c0 = (a0 == 0 ? 23 : a0);
		d6 = (b1 == 0 ? 27 : b1); d7 = (b0 == 0 ? 29 : b0); d8 = (b7 == 0 ? 31 : b7); d9 = (a1 == 0 ? 41 : a1); d0 = (d0 == 0 ? 43 : d0);
	}

	FinishTime = high_resolution_clock::now();
	duration<double> result = duration_cast<duration<double>>(FinishTime - StartTime);
	return result.count();
}

template <typename Type>
double FloatPointType<Type>::TestPlus()
{
	StartTime = high_resolution_clock::now();

	for (long i = 0; i < ITER_LOOP_FLOAT; ++i)
	{
		a1 = fmod(b1 + c2, DEVIDER) + 2;	a2 = fmod(b2 + d2, DEVIDER) + 3;	a3 = fmod(a4 + c3, DEVIDER) + 4;	a4 = fmod(b9 + d5, DEVIDER) + 5;	a5 = fmod(b5 + c8, DEVIDER) + 6;
		b1 = fmod(a1 + b3, DEVIDER) + 7;	b2 = fmod(c2 + d5, DEVIDER) + 8;	b3 = fmod(d8 + a8, DEVIDER) + 9;	b4 = fmod(b7 + a4, DEVIDER) + 2;	b5 = fmod(b2 + d5, DEVIDER) + 3;
		c1 = fmod(d1 + a0, DEVIDER) + 4;	c2 = fmod(d7 + b7, DEVIDER) + 5;	c3 = fmod(d4 + a3, DEVIDER) + 6;	c4 = fmod(d4 + c1, DEVIDER) + 7;	c5 = fmod(b6 + b0, DEVIDER) + 8;
		d1 = fmod(a4 + a1, DEVIDER) + 9;	d2 = fmod(c7 + b8, DEVIDER) + 2;	d3 = fmod(a1 + b5, DEVIDER) + 3;	d4 = fmod(b4 + d9, DEVIDER) + 4;	d5 = fmod(c5 + b1, DEVIDER) + 5;
		a6 = fmod(a7 + a8, DEVIDER) + 6;	a7 = fmod(b8 + c7, DEVIDER) + 7;	a8 = fmod(d6 + d8, DEVIDER) + 8;	a9 = fmod(c6 + a4, DEVIDER) + 9;	a0 = fmod(b1 + c5, DEVIDER) + 2;
		b6 = fmod(c8 + d0, DEVIDER) + 3;	b7 = fmod(c9 + d6, DEVIDER) + 4;	b8 = fmod(a8 + a0, DEVIDER) + 5;	b9 = fmod(c6 + d9, DEVIDER) + 6;	b0 = fmod(b5 + c2, DEVIDER) + 7;
		c6 = fmod(b1 + a7, DEVIDER) + 8;	c7 = fmod(d7 + a8, DEVIDER) + 9;	c8 = fmod(d8 + a9, DEVIDER) + 2;	c9 = fmod(c2 + a0, DEVIDER) + 3;	c0 = fmod(d0 + a0, DEVIDER) + 4;
		d6 = fmod(a1 + b1, DEVIDER) + 5;	d7 = fmod(a7 + b0, DEVIDER) + 6;	d8 = fmod(b8 + b7, DEVIDER) + 7;	d9 = fmod(a4 + a1, DEVIDER) + 8;	d0 = fmod(a0 + d0, DEVIDER) + 9;
	}

	FinishTime = high_resolution_clock::now();
	duration<double> result = duration_cast<duration<double>>(FinishTime - StartTime);
	return result.count();
}

template <typename Type>
double FloatPointType<Type>::TestMinus()
{
	StartTime = high_resolution_clock::now();

	for (long i = 0; i < ITER_LOOP_FLOAT; ++i)
	{
		a1 = fmod(b1 - c2, DEVIDER) + 2;	a2 = fmod(b2 - d2, DEVIDER) + 3;	a3 = fmod(a4 - c3, DEVIDER) + 4;	a4 = fmod(b9 - d5, DEVIDER) + 5;	a5 = fmod(b5 - c8, DEVIDER) + 6;
		b1 = fmod(a1 - b3, DEVIDER) + 7;	b2 = fmod(c2 - d5, DEVIDER) + 8;	b3 = fmod(d8 - a8, DEVIDER) + 9;	b4 = fmod(b7 - a4, DEVIDER) + 2;	b5 = fmod(b2 - d5, DEVIDER) + 3;
		c1 = fmod(d1 - a0, DEVIDER) + 4;	c2 = fmod(d7 - b7, DEVIDER) + 5;	c3 = fmod(d4 - a3, DEVIDER) + 6;	c4 = fmod(d4 - c1, DEVIDER) + 7;	c5 = fmod(b6 - b0, DEVIDER) + 8;
		d1 = fmod(a4 - a1, DEVIDER) + 9;	d2 = fmod(c7 - b8, DEVIDER) + 2;	d3 = fmod(a1 - b5, DEVIDER) + 3;	d4 = fmod(b4 - d9, DEVIDER) + 4;	d5 = fmod(c5 - b1, DEVIDER) + 5;
		a6 = fmod(a7 - a8, DEVIDER) + 6;	a7 = fmod(b8 - c7, DEVIDER) + 7;	a8 = fmod(d6 - d8, DEVIDER) + 8;	a9 = fmod(c6 - a4, DEVIDER) + 9;	a0 = fmod(b1 - c5, DEVIDER) + 2;
		b6 = fmod(c8 - d0, DEVIDER) + 3;	b7 = fmod(c9 - d6, DEVIDER) + 4;	b8 = fmod(a8 - a0, DEVIDER) + 5;	b9 = fmod(c6 - d9, DEVIDER) + 6;	b0 = fmod(b5 - c2, DEVIDER) + 7;
		c6 = fmod(b1 - a7, DEVIDER) + 8;	c7 = fmod(d7 - a8, DEVIDER) + 9;	c8 = fmod(d8 - a9, DEVIDER) + 2;	c9 = fmod(c2 - a0, DEVIDER) + 3;	c0 = fmod(d0 - a0, DEVIDER) + 4;
		d6 = fmod(a1 - b1, DEVIDER) + 5;	d7 = fmod(a7 - b0, DEVIDER) + 6;	d8 = fmod(b8 - b7, DEVIDER) + 7;	d9 = fmod(a4 - a1, DEVIDER) + 8;	d0 = fmod(a0 - d0, DEVIDER) + 9;
	}

	FinishTime = high_resolution_clock::now();
	duration<double> result = duration_cast<duration<double>>(FinishTime - StartTime);
	return result.count();
}

template <typename Type>
double FloatPointType<Type>::TestMult()
{
	StartTime = high_resolution_clock::now();

	for (long i = 0; i < ITER_LOOP_FLOAT; ++i)
	{
		a1 = fmod(b1 * c2, DEVIDER) + 2;	a2 = fmod(b2 * d2, DEVIDER) + 3;	a3 = fmod(a4 * c3, DEVIDER) + 4;	a4 = fmod(b9 * d5, DEVIDER) + 5;	a5 = fmod(b5 * c8, DEVIDER) + 6;
		b1 = fmod(a1 * b3, DEVIDER) + 7;	b2 = fmod(c2 * d5, DEVIDER) + 8;	b3 = fmod(d8 * a8, DEVIDER) + 9;	b4 = fmod(b7 * a4, DEVIDER) + 2;	b5 = fmod(b2 * d5, DEVIDER) + 3;
		c1 = fmod(d1 * a0, DEVIDER) + 4;	c2 = fmod(d7 * b7, DEVIDER) + 5;	c3 = fmod(d4 * a3, DEVIDER) + 6;	c4 = fmod(d4 * c1, DEVIDER) + 7;	c5 = fmod(b6 * b0, DEVIDER) + 8;
		d1 = fmod(a4 * a1, DEVIDER) + 9;	d2 = fmod(c7 * b8, DEVIDER) + 2;	d3 = fmod(a1 * b5, DEVIDER) + 3;	d4 = fmod(b4 * d9, DEVIDER) + 4;	d5 = fmod(c5 * b1, DEVIDER) + 5;
		a6 = fmod(a7 * a8, DEVIDER) + 6;	a7 = fmod(b8 * c7, DEVIDER) + 7;	a8 = fmod(d6 * d8, DEVIDER) + 8;	a9 = fmod(c6 * a4, DEVIDER) + 9;	a0 = fmod(b1 * c5, DEVIDER) + 2;
		b6 = fmod(c8 * d0, DEVIDER) + 3;	b7 = fmod(c9 * d6, DEVIDER) + 4;	b8 = fmod(a8 * a0, DEVIDER) + 5;	b9 = fmod(c6 * d9, DEVIDER) + 6;	b0 = fmod(b5 * c2, DEVIDER) + 7;
		c6 = fmod(b1 * a7, DEVIDER) + 8;	c7 = fmod(d7 * a8, DEVIDER) + 9;	c8 = fmod(d8 * a9, DEVIDER) + 2;	c9 = fmod(c2 * a0, DEVIDER) + 3;	c0 = fmod(d0 * a0, DEVIDER) + 4;
		d6 = fmod(a1 * b1, DEVIDER) + 5;	d7 = fmod(a7 * b0, DEVIDER) + 6;	d8 = fmod(b8 * b7, DEVIDER) + 7;	d9 = fmod(a4 * a1, DEVIDER) + 8;	d0 = fmod(a0 * d0, DEVIDER) + 9;
	}
	FinishTime = high_resolution_clock::now();
	duration<double> result = duration_cast<duration<double>>(FinishTime - StartTime);
	return result.count();
}

template <typename Type>
double FloatPointType<Type>::TestDiv()
{
	StartTime = high_resolution_clock::now();

	for (long i = 0; i < ITER_LOOP_FLOAT; ++i)
	{
		a1 = a2 / (c2 == 0 ? 5 : c2);   a2 = b2 / (d2 == 0 ? 7 : d2);	a3 = a4 / (c3 == 0 ? 11 : c3);
		a4 = b9 / (d5 == 0 ? 13 : d5);  a5 = b5 / (c8 == 0 ? 17 : c8);
		b1 = a1 / (b3 == 0 ? 19 : b3);  b2 = c2 / (d5 == 0 ? 23 : d5);	b3 = d8 / (a8 == 0 ? 27 : a8);
		b4 = b7 / (a4 == 0 ? 29 : a4);  b5 = b2 / (d5 == 0 ? 31 : d5);
		c1 = d1 / (a0 == 0 ? 37 : a0);	c2 = d7 / (b7 == 0 ? 41 : b7);	c3 = d4 / (a3 == 0 ? 43 : a3);
		c4 = d4 / (c1 == 0 ? 47 : c1);	c5 = b6 / (b0 == 0 ? 5 : b0);
		d1 = a4 / (a1 == 0 ? 7 : a1);	d2 = c7 / (b8 == 0 ? 11 : b8);	d3 = a1 / (b5 == 0 ? 13 : b5);
		d4 = b4 / (d9 == 0 ? 17 : d9);	d5 = c5 / (b1 == 0 ? 19 : b1);
		a6 = a7 / (a8 == 0 ? 23 : a8);	a7 = b8 / (c7 == 0 ? 27 : c7);	a8 = d6 / (d8 == 0 ? 29 : d8);
		a9 = c6 / (a4 == 0 ? 31 : a4);	a0 = b1 / (c5 == 0 ? 37 : c5);
		b6 = c8 / (d0 == 0 ? 41 : d0);	b7 = c9 / (d6 == 0 ? 43 : d6);	b8 = a8 / (a0 == 0 ? 47 : a0);
		b9 = c6 / (d9 == 0 ? 5 : d9);	b0 = b5 / (c2 == 0 ? 7 : c2);
		c6 = b1 / (a7 == 0 ? 11 : a7);	c7 = d7 / (a8 == 0 ? 13 : a8);	c8 = d8 / (a9 == 0 ? 17 : a9);
		c9 = c2 / (a0 == 0 ? 19 : a0);	c0 = d0 / (a0 == 0 ? 23 : a0);
		d6 = a1 / (b1 == 0 ? 27 : b1);	d7 = a7 / (b0 == 0 ? 29 : b0);	d8 = b8 / (b7 == 0 ? 31 : b7);
		d9 = a4 / (a1 == 0 ? 41 : a1);	d0 = a0 / (d0 == 0 ? 43 : d0);
	}
	FinishTime = high_resolution_clock::now();
	duration<double> result = duration_cast<duration<double>>(FinishTime - StartTime);
	return result.count();
}

template<typename Type>
double FloatPointType<Type>::TestIncrement()
{
	StartTime = high_resolution_clock::now();

	for (int i = 0; i < ITER_LOOP_FLOAT; ++i)
	{

		a1++;	a2++;	a3++;	a4++;	a5++;
		b1++;	b2++;	b3++;	b4++;	b5++;
		c1++;	c2++;	c3++;	c4++;	c5++;
		d1++;	d2++;	d3++;	d4++;	d5++;
		a6++;	a7++;	a8++;	a9++;	a0++;
		b6++;	b7++;	b8++;	b9++;	b0++;
		c6++;	c7++;	c8++;	c9++;	c0++;
		d6++;	d7++;	d8++;	d9++;	d0++;
	}

	FinishTime = high_resolution_clock::now();
	duration<double> result = duration_cast<duration<double>>(FinishTime - StartTime);
	return result.count();
}

template<typename Type>
double FloatPointType<Type>::TestDecrement()
{
	StartTime = high_resolution_clock::now();

	for (int i = 0; i < ITER_LOOP_FLOAT; ++i)
	{

		a1--;	a2--;	a3--;	a4--;	a5--;
		b1--;	b2--;	b3--;	b4--;	b5--;
		c1--;	c2--;	c3--;	c4--;	c5--;
		d1--;	d2--;	d3--;	d4--;	d5--;
		a6--;	a7--;	a8--;	a9--;	a0--;
		b6--;	b7--;	b8--;	b9--;	b0--;
		c6--;	c7--;	c8--;	c9--;	c0--;
		d6--;	d7--;	d8--;	d9--;	d0--;
	}

	FinishTime = high_resolution_clock::now();
	duration<double> result = duration_cast<duration<double>>(FinishTime - StartTime);
	return result.count();
}


template<typename Type>
void FloatPointType<Type>::SingleTest(double& _plus, double& _minus, double& _mult, double& _div, double& _inc, double& _dec)
{
	const double NUMERATOR = NUMB_OF_FLOAT_VAR * ITER_LOOP_FLOAT;
	do {
		Empty = EmptyLoop();
		TimeTotalPlus = TestPlus();
		TimeTotalMinus = TestMinus();
		TimeTotalMult = TestMult();
	} while (TimeTotalPlus <= Empty || TimeTotalMinus <= Empty || TimeTotalMult <= Empty);

	do {
		EmptyIncDec = EmptyLoopIncDec();
		TimeTotalIncrement = TestIncrement();
		TimeTotalDecrement = TestDecrement();
	} while (TimeTotalIncrement <= EmptyIncDec || TimeTotalDecrement <= EmptyIncDec);

	do {
		EmptyDiv = EmptyLoopDiv();
		TimeTotalDiv = TestDiv();
	} while (TimeTotalDiv <= EmptyDiv);

	_plus = NUMERATOR / (TimeTotalPlus - Empty);
	_minus = NUMERATOR / (TimeTotalMinus - Empty);
	_mult = NUMERATOR / (TimeTotalMult - Empty);
	_div = NUMERATOR / (TimeTotalDiv - EmptyDiv);
	_inc = NUMERATOR / (TimeTotalIncrement - EmptyLoopIncDec());
	_dec = NUMERATOR / (TimeTotalDecrement - EmptyLoopIncDec());
}


template <typename Type>
FloatPointType<Type>::~FloatPointType()
{
}
