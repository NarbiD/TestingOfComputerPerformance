#include "FloatPointType.h"

using namespace std::chrono;


template <typename Type>
double FloatPointType<Type>::EmptyLoop()
{
	StartTime = high_resolution_clock::now();

	for (long i = 0; i < ITER_LOOP_FLOAT; ++i)
	{
		a1 = fmod(b1, DEVIDER) + 2;	a2 = fmod(b2, DEVIDER) + 3;	a3 = fmod(a4, DEVIDER) + 4;	a4 = fmod(f4, DEVIDER) + 5;	a5 = fmod(b5, DEVIDER) + 6;
		b1 = fmod(a1, DEVIDER) + 7;	b2 = fmod(c2, DEVIDER) + 8;	b3 = fmod(h3, DEVIDER) + 9;	b4 = fmod(f2, DEVIDER) + 2;	b5 = fmod(b2, DEVIDER) + 3;
		c1 = fmod(d1, DEVIDER) + 4;	c2 = fmod(h2, DEVIDER) + 5;	c3 = fmod(d4, DEVIDER) + 6;	c4 = fmod(d4, DEVIDER) + 7;	c5 = fmod(f1, DEVIDER) + 8;
		d1 = fmod(a4, DEVIDER) + 9;	d2 = fmod(g2, DEVIDER) + 2;	d3 = fmod(a1, DEVIDER) + 3;	d4 = fmod(b4, DEVIDER) + 4;	d5 = fmod(c5, DEVIDER) + 5;
		e1 = fmod(e2, DEVIDER) + 6;	e2 = fmod(f3, DEVIDER) + 7;	e3 = fmod(h1, DEVIDER) + 8;	e4 = fmod(g1, DEVIDER) + 9;	e5 = fmod(b1, DEVIDER) + 2;
		f1 = fmod(g3, DEVIDER) + 3;	f2 = fmod(g4, DEVIDER) + 4;	f3 = fmod(e3, DEVIDER) + 5;	f4 = fmod(g1, DEVIDER) + 6;	f5 = fmod(b5, DEVIDER) + 7;
		g1 = fmod(b1, DEVIDER) + 8;	g2 = fmod(h2, DEVIDER) + 9;	g3 = fmod(h3, DEVIDER) + 2;	g4 = fmod(c2, DEVIDER) + 3;	g5 = fmod(h5, DEVIDER) + 4;
		h1 = fmod(a1, DEVIDER) + 5;	h2 = fmod(e2, DEVIDER) + 6;	h3 = fmod(f3, DEVIDER) + 7;	h4 = fmod(a4, DEVIDER) + 8;	h5 = fmod(e5, DEVIDER) + 9;
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
		a1 = fmod(b1 + 2, DEVIDER) + 2;	a2 = fmod(b2 + 3, DEVIDER) + 3;	a3 = fmod(a4 + 4, DEVIDER) + 4;	a4 = fmod(f4 + 5, DEVIDER) + 5;	a5 = fmod(b5 + 6, DEVIDER) + 6;
		b1 = fmod(a1 + 7, DEVIDER) + 7;	b2 = fmod(c2 + 8, DEVIDER) + 8;	b3 = fmod(h3 + 9, DEVIDER) + 9;	b4 = fmod(f2 + 2, DEVIDER) + 2;	b5 = fmod(b2 + 3, DEVIDER) + 3;
		c1 = fmod(d1 + 4, DEVIDER) + 4;	c2 = fmod(h2 + 5, DEVIDER) + 5;	c3 = fmod(d4 + 6, DEVIDER) + 6;	c4 = fmod(d4 + 7, DEVIDER) + 7;	c5 = fmod(f1 + 8, DEVIDER) + 8;
		d1 = fmod(a4 + 9, DEVIDER) + 9;	d2 = fmod(g2 + 2, DEVIDER) + 2;	d3 = fmod(a1 + 3, DEVIDER) + 3;	d4 = fmod(b4 + 4, DEVIDER) + 4;	d5 = fmod(c5 + 5, DEVIDER) + 5;
		e1 = fmod(e2 + 6, DEVIDER) + 6;	e2 = fmod(f3 + 7, DEVIDER) + 7;	e3 = fmod(h1 + 8, DEVIDER) + 8;	e4 = fmod(g1 + 9, DEVIDER) + 9;	e5 = fmod(b1 + 2, DEVIDER) + 2;
		f1 = fmod(g3 + 3, DEVIDER) + 3;	f2 = fmod(g4 + 4, DEVIDER) + 4;	f3 = fmod(e3 + 5, DEVIDER) + 5;	f4 = fmod(g1 + 6, DEVIDER) + 6;	f5 = fmod(b5 + 7, DEVIDER) + 7;
		g1 = fmod(b1 + 8, DEVIDER) + 8;	g2 = fmod(h2 + 9, DEVIDER) + 9;	g3 = fmod(h3 + 2, DEVIDER) + 2;	g4 = fmod(c2 + 3, DEVIDER) + 3;	g5 = fmod(h5 + 4, DEVIDER) + 4;
		h1 = fmod(a1 + 5, DEVIDER) + 5;	h2 = fmod(e2 + 6, DEVIDER) + 6;	h3 = fmod(f3 + 7, DEVIDER) + 7;	h4 = fmod(a4 + 8, DEVIDER) + 8;	h5 = fmod(e5 + 9, DEVIDER) + 9;
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
		a1 = fmod(b1 + c2, DEVIDER) + 2;	a2 = fmod(b2 + d2, DEVIDER) + 3;	a3 = fmod(a4 + c3, DEVIDER) + 4;	a4 = fmod(f4 + d5, DEVIDER) + 5;	a5 = fmod(b5 + g3, DEVIDER) + 6;
		b1 = fmod(a1 + b3, DEVIDER) + 7;	b2 = fmod(c2 + d5, DEVIDER) + 8;	b3 = fmod(h3 + e3, DEVIDER) + 9;	b4 = fmod(f2 + a4, DEVIDER) + 2;	b5 = fmod(b2 + d5, DEVIDER) + 3;
		c1 = fmod(d1 + e5, DEVIDER) + 4;	c2 = fmod(h2 + f2, DEVIDER) + 5;	c3 = fmod(d4 + a3, DEVIDER) + 6;	c4 = fmod(d4 + c1, DEVIDER) + 7;	c5 = fmod(f1 + f5, DEVIDER) + 8;
		d1 = fmod(a4 + a1, DEVIDER) + 9;	d2 = fmod(g2 + f3, DEVIDER) + 2;	d3 = fmod(a1 + b5, DEVIDER) + 3;	d4 = fmod(b4 + h4, DEVIDER) + 4;	d5 = fmod(c5 + b1, DEVIDER) + 5;
		e1 = fmod(e2 + e3, DEVIDER) + 6;	e2 = fmod(f3 + g2, DEVIDER) + 7;	e3 = fmod(h1 + h3, DEVIDER) + 8;	e4 = fmod(g1 + a4, DEVIDER) + 9;	e5 = fmod(b1 + c5, DEVIDER) + 2;
		f1 = fmod(g3 + h5, DEVIDER) + 3;	f2 = fmod(g4 + h1, DEVIDER) + 4;	f3 = fmod(e3 + e5, DEVIDER) + 5;	f4 = fmod(g1 + h4, DEVIDER) + 6;	f5 = fmod(b5 + c2, DEVIDER) + 7;
		g1 = fmod(b1 + e2, DEVIDER) + 8;	g2 = fmod(h2 + e3, DEVIDER) + 9;	g3 = fmod(h3 + e4, DEVIDER) + 2;	g4 = fmod(c2 + e5, DEVIDER) + 3;	g5 = fmod(h5 + e5, DEVIDER) + 4;
		h1 = fmod(a1 + b1, DEVIDER) + 5;	h2 = fmod(e2 + f5, DEVIDER) + 6;	h3 = fmod(f3 + f2, DEVIDER) + 7;	h4 = fmod(a4 + a1, DEVIDER) + 8;	h5 = fmod(e5 + h5, DEVIDER) + 9;
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
		a1 = fmod(b1 - c2, DEVIDER) + 2;	a2 = fmod(b2 - d2, DEVIDER) + 3;	a3 = fmod(a4 - c3, DEVIDER) + 4;	a4 = fmod(f4 - d5, DEVIDER) + 5;	a5 = fmod(b5 - g3, DEVIDER) + 6;
		b1 = fmod(a1 - b3, DEVIDER) + 7;	b2 = fmod(c2 - d5, DEVIDER) + 8;	b3 = fmod(h3 - e3, DEVIDER) + 9;	b4 = fmod(f2 - a4, DEVIDER) + 2;	b5 = fmod(b2 - d5, DEVIDER) + 3;
		c1 = fmod(d1 - e5, DEVIDER) + 4;	c2 = fmod(h2 - f2, DEVIDER) + 5;	c3 = fmod(d4 - a3, DEVIDER) + 6;	c4 = fmod(d4 - c1, DEVIDER) + 7;	c5 = fmod(f1 - f5, DEVIDER) + 8;
		d1 = fmod(a4 - a1, DEVIDER) + 9;	d2 = fmod(g2 - f3, DEVIDER) + 2;	d3 = fmod(a1 - b5, DEVIDER) + 3;	d4 = fmod(b4 - h4, DEVIDER) + 4;	d5 = fmod(c5 - b1, DEVIDER) + 5;
		e1 = fmod(e2 - e3, DEVIDER) + 6;	e2 = fmod(f3 - g2, DEVIDER) + 7;	e3 = fmod(h1 - h3, DEVIDER) + 8;	e4 = fmod(g1 - a4, DEVIDER) + 9;	e5 = fmod(b1 - c5, DEVIDER) + 2;
		f1 = fmod(g3 - h5, DEVIDER) + 3;	f2 = fmod(g4 - h1, DEVIDER) + 4;	f3 = fmod(e3 - e5, DEVIDER) + 5;	f4 = fmod(g1 - h4, DEVIDER) + 6;	f5 = fmod(b5 - c2, DEVIDER) + 7;
		g1 = fmod(b1 - e2, DEVIDER) + 8;	g2 = fmod(h2 - e3, DEVIDER) + 9;	g3 = fmod(h3 - e4, DEVIDER) + 2;	g4 = fmod(c2 - e5, DEVIDER) + 3;	g5 = fmod(h5 - e5, DEVIDER) + 4;
		h1 = fmod(a1 - b1, DEVIDER) + 5;	h2 = fmod(e2 - f5, DEVIDER) + 6;	h3 = fmod(f3 - f2, DEVIDER) + 7;	h4 = fmod(a4 - a1, DEVIDER) + 8;	h5 = fmod(e5 - h5, DEVIDER) + 9;
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
		a1 = fmod(b1 * c2, DEVIDER) + 2;	a2 = fmod(b2 * d2, DEVIDER) + 3;	a3 = fmod(a4 * c3, DEVIDER) + 4;	a4 = fmod(f4 * d5, DEVIDER) + 5;	a5 = fmod(b5 * g3, DEVIDER) + 6;
		b1 = fmod(a1 * b3, DEVIDER) + 7;	b2 = fmod(c2 * d5, DEVIDER) + 8;	b3 = fmod(h3 * e3, DEVIDER) + 9;	b4 = fmod(f2 * a4, DEVIDER) + 2;	b5 = fmod(b2 * d5, DEVIDER) + 3;
		c1 = fmod(d1 * e5, DEVIDER) + 4;	c2 = fmod(h2 * f2, DEVIDER) + 5;	c3 = fmod(d4 * a3, DEVIDER) + 6;	c4 = fmod(d4 * c1, DEVIDER) + 7;	c5 = fmod(f1 * f5, DEVIDER) + 8;
		d1 = fmod(a4 * a1, DEVIDER) + 9;	d2 = fmod(g2 * f3, DEVIDER) + 2;	d3 = fmod(a1 * b5, DEVIDER) + 3;	d4 = fmod(b4 * h4, DEVIDER) + 4;	d5 = fmod(c5 * b1, DEVIDER) + 5;
		e1 = fmod(e2 * e3, DEVIDER) + 6;	e2 = fmod(f3 * g2, DEVIDER) + 7;	e3 = fmod(h1 * h3, DEVIDER) + 8;	e4 = fmod(g1 * a4, DEVIDER) + 9;	e5 = fmod(b1 * c5, DEVIDER) + 2;
		f1 = fmod(g3 * h5, DEVIDER) + 3;	f2 = fmod(g4 * h1, DEVIDER) + 4;	f3 = fmod(e3 * e5, DEVIDER) + 5;	f4 = fmod(g1 * h4, DEVIDER) + 6;	f5 = fmod(b5 * c2, DEVIDER) + 7;
		g1 = fmod(b1 * e2, DEVIDER) + 8;	g2 = fmod(h2 * e3, DEVIDER) + 9;	g3 = fmod(h3 * e4, DEVIDER) + 2;	g4 = fmod(c2 * e5, DEVIDER) + 3;	g5 = fmod(h5 * e5, DEVIDER) + 4;
		h1 = fmod(a1 * b1, DEVIDER) + 5;	h2 = fmod(e2 * f5, DEVIDER) + 6;	h3 = fmod(f3 * f2, DEVIDER) + 7;	h4 = fmod(a4 * a1, DEVIDER) + 8;	h5 = fmod(e5 * h5, DEVIDER) + 9;
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
		a1 = fmod(b1 / c2 + 2, DEVIDER) + 2.0;	a2 = fmod(b2 / d2 + 3, DEVIDER) + 3.0;	a3 = fmod(a4 / c3 + 4, DEVIDER) + 4.0;	a4 = fmod(f4 / d5 + 5, DEVIDER) + 5.0;	a5 = fmod(b5 / g3 + 6, DEVIDER) + 6.0;
		b1 = fmod(a1 / b3 + 7, DEVIDER) + 7.0;	b2 = fmod(c2 / d5 + 8, DEVIDER) + 8.0;	b3 = fmod(h3 / e3 + 9, DEVIDER) + 9.0;	b4 = fmod(f2 / a4 + 2, DEVIDER) + 2.0;	b5 = fmod(b2 / d5 + 3, DEVIDER) + 3.0;
		c1 = fmod(d1 / e5 + 4, DEVIDER) + 4.0;	c2 = fmod(h2 / f2 + 5, DEVIDER) + 5.0;	c3 = fmod(d4 / a3 + 6, DEVIDER) + 6.0;	c4 = fmod(d4 / c1 + 7, DEVIDER) + 7.0;	c5 = fmod(f1 / f5 + 8, DEVIDER) + 8.0;
		d1 = fmod(a4 / a1 + 9, DEVIDER) + 9.0;	d2 = fmod(g2 / f3 + 2, DEVIDER) + 2.0;	d3 = fmod(a1 / b5 + 3, DEVIDER) + 3.0;	d4 = fmod(b4 / h4 + 4, DEVIDER) + 4.0;	d5 = fmod(c5 / b1 + 5, DEVIDER) + 5.0;
		e1 = fmod(e2 / e3 + 6, DEVIDER) + 6.0;	e2 = fmod(f3 / g2 + 7, DEVIDER) + 7.0;	e3 = fmod(h1 / h3 + 8, DEVIDER) + 8.0;	e4 = fmod(g1 / a4 + 9, DEVIDER) + 9.0;	e5 = fmod(b1 / c5 + 2, DEVIDER) + 2.0;
		f1 = fmod(g3 / h5 + 3, DEVIDER) + 3.0;	f2 = fmod(g4 / h1 + 4, DEVIDER) + 4.0;	f3 = fmod(e3 / e5 + 5, DEVIDER) + 5.0;	f4 = fmod(g1 / h4 + 6, DEVIDER) + 6.0;	f5 = fmod(b5 / c2 + 7, DEVIDER) + 7.0;
		g1 = fmod(b1 / e2 + 8, DEVIDER) + 8.0;	g2 = fmod(h2 / e3 + 9, DEVIDER) + 9.0;	g3 = fmod(h3 / e4 + 2, DEVIDER) + 2.0;	g4 = fmod(c2 / e5 + 3, DEVIDER) + 3.0;	g5 = fmod(h5 / e5 + 4, DEVIDER) + 4.0;
		h1 = fmod(a1 / b1 + 5, DEVIDER) + 5.0;	h2 = fmod(e2 / f5 + 6, DEVIDER) + 6.0;	h3 = fmod(f3 / f2 + 7, DEVIDER) + 7.0;	h4 = fmod(a4 / a1 + 8, DEVIDER) + 8.0;	h5 = fmod(e5 / h5 + 9, DEVIDER) + 9.0;
	}

	FinishTime = high_resolution_clock::now();
	duration<double> result = duration_cast<duration<double>>(FinishTime - StartTime);
	return result.count();
}

template<typename Type>
void FloatPointType<Type>::Test()
{
	const double NUMERATOR = NUMB_OF_FLOAT_VAR * ITER_LOOP_FLOAT;

	do {
		Empty = EmptyLoop();
		TimeTotalPlus = TestPlus();
		TimeTotalMinus = TestMinus();
		TimeTotalMult = TestMult();
	} while (TimeTotalPlus <= Empty || TimeTotalMinus <= Empty || TimeTotalMult <= Empty);

	do {
		EmptyDiv = EmptyLoopDiv();
		TimeTotalDiv = TestDiv();
	} while (TimeTotalDiv <= EmptyDiv);

	Plus = NUMERATOR / (TimeTotalPlus - Empty);
	Minus = NUMERATOR / (TimeTotalMinus - Empty);
	Mult = NUMERATOR / (TimeTotalMult - EmptyMult);
	Div = NUMERATOR / (TimeTotalDiv - EmptyDiv);

	ShowAll();
}


template <typename Type>
FloatPointType<Type>::~FloatPointType()
{
}

