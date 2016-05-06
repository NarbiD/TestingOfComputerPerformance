#include "FloatPointType.h"

using namespace std::chrono;


template <typename Type>
double FloatPointType<Type>::EmptyLoop()
{
	StartTime = high_resolution_clock::now();

	for (long i = 0; i < ITER_LOOP_FLOAT; ++i)
	{
		a1 = fmod(b1, DEVINDER) + 2;	a2 = fmod(b2, DEVINDER) + 3;	a3 = fmod(a4, DEVINDER) + 4;	a4 = fmod(f4, DEVINDER) + 5;	a5 = fmod(b5, DEVINDER) + 6;
		b1 = fmod(a1, DEVINDER) + 7;	b2 = fmod(c2, DEVINDER) + 8;	b3 = fmod(h3, DEVINDER) + 9;	b4 = fmod(f2, DEVINDER) + 2;	b5 = fmod(b2, DEVINDER) + 3;
		c1 = fmod(d1, DEVINDER) + 4;	c2 = fmod(h2, DEVINDER) + 5;	c3 = fmod(d4, DEVINDER) + 6;	c4 = fmod(d4, DEVINDER) + 7;	c5 = fmod(f1, DEVINDER) + 8;
		d1 = fmod(a4, DEVINDER) + 9;	d2 = fmod(g2, DEVINDER) + 2;	d3 = fmod(a1, DEVINDER) + 3;	d4 = fmod(b4, DEVINDER) + 4;	d5 = fmod(c5, DEVINDER) + 5;
		e1 = fmod(e2, DEVINDER) + 6;	e2 = fmod(f3, DEVINDER) + 7;	e3 = fmod(h1, DEVINDER) + 8;	e4 = fmod(g1, DEVINDER) + 9;	e5 = fmod(b1, DEVINDER) + 2;
		f1 = fmod(g3, DEVINDER) + 3;	f2 = fmod(g4, DEVINDER) + 4;	f3 = fmod(e3, DEVINDER) + 5;	f4 = fmod(g1, DEVINDER) + 6;	f5 = fmod(b5, DEVINDER) + 7;
		g1 = fmod(b1, DEVINDER) + 8;	g2 = fmod(h2, DEVINDER) + 9;	g3 = fmod(h3, DEVINDER) + 2;	g4 = fmod(c2, DEVINDER) + 3;	g5 = fmod(h5, DEVINDER) + 4;
		h1 = fmod(a1, DEVINDER) + 5;	h2 = fmod(e2, DEVINDER) + 6;	h3 = fmod(f3, DEVINDER) + 7;	h4 = fmod(a4, DEVINDER) + 8;	h5 = fmod(e5, DEVINDER) + 9;
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
		a1 = fmod(b1 + 2, DEVINDER) + 2;	a2 = fmod(b2 + 3, DEVINDER) + 3;	a3 = fmod(a4 + 4, DEVINDER) + 4;	a4 = fmod(f4 + 5, DEVINDER) + 5;	a5 = fmod(b5 + 6, DEVINDER) + 6;
		b1 = fmod(a1 + 7, DEVINDER) + 7;	b2 = fmod(c2 + 8, DEVINDER) + 8;	b3 = fmod(h3 + 9, DEVINDER) + 9;	b4 = fmod(f2 + 2, DEVINDER) + 2;	b5 = fmod(b2 + 3, DEVINDER) + 3;
		c1 = fmod(d1 + 4, DEVINDER) + 4;	c2 = fmod(h2 + 5, DEVINDER) + 5;	c3 = fmod(d4 + 6, DEVINDER) + 6;	c4 = fmod(d4 + 7, DEVINDER) + 7;	c5 = fmod(f1 + 8, DEVINDER) + 8;
		d1 = fmod(a4 + 9, DEVINDER) + 9;	d2 = fmod(g2 + 2, DEVINDER) + 2;	d3 = fmod(a1 + 3, DEVINDER) + 3;	d4 = fmod(b4 + 4, DEVINDER) + 4;	d5 = fmod(c5 + 5, DEVINDER) + 5;
		e1 = fmod(e2 + 6, DEVINDER) + 6;	e2 = fmod(f3 + 7, DEVINDER) + 7;	e3 = fmod(h1 + 8, DEVINDER) + 8;	e4 = fmod(g1 + 9, DEVINDER) + 9;	e5 = fmod(b1 + 2, DEVINDER) + 2;
		f1 = fmod(g3 + 3, DEVINDER) + 3;	f2 = fmod(g4 + 4, DEVINDER) + 4;	f3 = fmod(e3 + 5, DEVINDER) + 5;	f4 = fmod(g1 + 6, DEVINDER) + 6;	f5 = fmod(b5 + 7, DEVINDER) + 7;
		g1 = fmod(b1 + 8, DEVINDER) + 8;	g2 = fmod(h2 + 9, DEVINDER) + 9;	g3 = fmod(h3 + 2, DEVINDER) + 2;	g4 = fmod(c2 + 3, DEVINDER) + 3;	g5 = fmod(h5 + 4, DEVINDER) + 4;
		h1 = fmod(a1 + 5, DEVINDER) + 5;	h2 = fmod(e2 + 6, DEVINDER) + 6;	h3 = fmod(f3 + 7, DEVINDER) + 7;	h4 = fmod(a4 + 8, DEVINDER) + 8;	h5 = fmod(e5 + 9, DEVINDER) + 9;
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
		a1 = fmod(b1 + c2, DEVINDER) + 2;	a2 = fmod(b2 + d2, DEVINDER) + 3;	a3 = fmod(a4 + c3, DEVINDER) + 4;	a4 = fmod(f4 + d5, DEVINDER) + 5;	a5 = fmod(b5 + g3, DEVINDER) + 6;
		b1 = fmod(a1 + b3, DEVINDER) + 7;	b2 = fmod(c2 + d5, DEVINDER) + 8;	b3 = fmod(h3 + e3, DEVINDER) + 9;	b4 = fmod(f2 + a4, DEVINDER) + 2;	b5 = fmod(b2 + d5, DEVINDER) + 3;
		c1 = fmod(d1 + e5, DEVINDER) + 4;	c2 = fmod(h2 + f2, DEVINDER) + 5;	c3 = fmod(d4 + a3, DEVINDER) + 6;	c4 = fmod(d4 + c1, DEVINDER) + 7;	c5 = fmod(f1 + f5, DEVINDER) + 8;
		d1 = fmod(a4 + a1, DEVINDER) + 9;	d2 = fmod(g2 + f3, DEVINDER) + 2;	d3 = fmod(a1 + b5, DEVINDER) + 3;	d4 = fmod(b4 + h4, DEVINDER) + 4;	d5 = fmod(c5 + b1, DEVINDER) + 5;
		e1 = fmod(e2 + e3, DEVINDER) + 6;	e2 = fmod(f3 + g2, DEVINDER) + 7;	e3 = fmod(h1 + h3, DEVINDER) + 8;	e4 = fmod(g1 + a4, DEVINDER) + 9;	e5 = fmod(b1 + c5, DEVINDER) + 2;
		f1 = fmod(g3 + h5, DEVINDER) + 3;	f2 = fmod(g4 + h1, DEVINDER) + 4;	f3 = fmod(e3 + e5, DEVINDER) + 5;	f4 = fmod(g1 + h4, DEVINDER) + 6;	f5 = fmod(b5 + c2, DEVINDER) + 7;
		g1 = fmod(b1 + e2, DEVINDER) + 8;	g2 = fmod(h2 + e3, DEVINDER) + 9;	g3 = fmod(h3 + e4, DEVINDER) + 2;	g4 = fmod(c2 + e5, DEVINDER) + 3;	g5 = fmod(h5 + e5, DEVINDER) + 4;
		h1 = fmod(a1 + b1, DEVINDER) + 5;	h2 = fmod(e2 + f5, DEVINDER) + 6;	h3 = fmod(f3 + f2, DEVINDER) + 7;	h4 = fmod(a4 + a1, DEVINDER) + 8;	h5 = fmod(e5 + h5, DEVINDER) + 9;
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
		a1 = fmod(b1 - c2, DEVINDER) + 2;	a2 = fmod(b2 - d2, DEVINDER) + 3;	a3 = fmod(a4 - c3, DEVINDER) + 4;	a4 = fmod(f4 - d5, DEVINDER) + 5;	a5 = fmod(b5 - g3, DEVINDER) + 6;
		b1 = fmod(a1 - b3, DEVINDER) + 7;	b2 = fmod(c2 - d5, DEVINDER) + 8;	b3 = fmod(h3 - e3, DEVINDER) + 9;	b4 = fmod(f2 - a4, DEVINDER) + 2;	b5 = fmod(b2 - d5, DEVINDER) + 3;
		c1 = fmod(d1 - e5, DEVINDER) + 4;	c2 = fmod(h2 - f2, DEVINDER) + 5;	c3 = fmod(d4 - a3, DEVINDER) + 6;	c4 = fmod(d4 - c1, DEVINDER) + 7;	c5 = fmod(f1 - f5, DEVINDER) + 8;
		d1 = fmod(a4 - a1, DEVINDER) + 9;	d2 = fmod(g2 - f3, DEVINDER) + 2;	d3 = fmod(a1 - b5, DEVINDER) + 3;	d4 = fmod(b4 - h4, DEVINDER) + 4;	d5 = fmod(c5 - b1, DEVINDER) + 5;
		e1 = fmod(e2 - e3, DEVINDER) + 6;	e2 = fmod(f3 - g2, DEVINDER) + 7;	e3 = fmod(h1 - h3, DEVINDER) + 8;	e4 = fmod(g1 - a4, DEVINDER) + 9;	e5 = fmod(b1 - c5, DEVINDER) + 2;
		f1 = fmod(g3 - h5, DEVINDER) + 3;	f2 = fmod(g4 - h1, DEVINDER) + 4;	f3 = fmod(e3 - e5, DEVINDER) + 5;	f4 = fmod(g1 - h4, DEVINDER) + 6;	f5 = fmod(b5 - c2, DEVINDER) + 7;
		g1 = fmod(b1 - e2, DEVINDER) + 8;	g2 = fmod(h2 - e3, DEVINDER) + 9;	g3 = fmod(h3 - e4, DEVINDER) + 2;	g4 = fmod(c2 - e5, DEVINDER) + 3;	g5 = fmod(h5 - e5, DEVINDER) + 4;
		h1 = fmod(a1 - b1, DEVINDER) + 5;	h2 = fmod(e2 - f5, DEVINDER) + 6;	h3 = fmod(f3 - f2, DEVINDER) + 7;	h4 = fmod(a4 - a1, DEVINDER) + 8;	h5 = fmod(e5 - h5, DEVINDER) + 9;
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
		a1 = fmod(b1 * c2, DEVINDER) + 2;	a2 = fmod(b2 * d2, DEVINDER) + 3;	a3 = fmod(a4 * c3, DEVINDER) + 4;	a4 = fmod(f4 * d5, DEVINDER) + 5;	a5 = fmod(b5 * g3, DEVINDER) + 6;
		b1 = fmod(a1 * b3, DEVINDER) + 7;	b2 = fmod(c2 * d5, DEVINDER) + 8;	b3 = fmod(h3 * e3, DEVINDER) + 9;	b4 = fmod(f2 * a4, DEVINDER) + 2;	b5 = fmod(b2 * d5, DEVINDER) + 3;
		c1 = fmod(d1 * e5, DEVINDER) + 4;	c2 = fmod(h2 * f2, DEVINDER) + 5;	c3 = fmod(d4 * a3, DEVINDER) + 6;	c4 = fmod(d4 * c1, DEVINDER) + 7;	c5 = fmod(f1 * f5, DEVINDER) + 8;
		d1 = fmod(a4 * a1, DEVINDER) + 9;	d2 = fmod(g2 * f3, DEVINDER) + 2;	d3 = fmod(a1 * b5, DEVINDER) + 3;	d4 = fmod(b4 * h4, DEVINDER) + 4;	d5 = fmod(c5 * b1, DEVINDER) + 5;
		e1 = fmod(e2 * e3, DEVINDER) + 6;	e2 = fmod(f3 * g2, DEVINDER) + 7;	e3 = fmod(h1 * h3, DEVINDER) + 8;	e4 = fmod(g1 * a4, DEVINDER) + 9;	e5 = fmod(b1 * c5, DEVINDER) + 2;
		f1 = fmod(g3 * h5, DEVINDER) + 3;	f2 = fmod(g4 * h1, DEVINDER) + 4;	f3 = fmod(e3 * e5, DEVINDER) + 5;	f4 = fmod(g1 * h4, DEVINDER) + 6;	f5 = fmod(b5 * c2, DEVINDER) + 7;
		g1 = fmod(b1 * e2, DEVINDER) + 8;	g2 = fmod(h2 * e3, DEVINDER) + 9;	g3 = fmod(h3 * e4, DEVINDER) + 2;	g4 = fmod(c2 * e5, DEVINDER) + 3;	g5 = fmod(h5 * e5, DEVINDER) + 4;
		h1 = fmod(a1 * b1, DEVINDER) + 5;	h2 = fmod(e2 * f5, DEVINDER) + 6;	h3 = fmod(f3 * f2, DEVINDER) + 7;	h4 = fmod(a4 * a1, DEVINDER) + 8;	h5 = fmod(e5 * h5, DEVINDER) + 9;
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
		a1 = fmod(b1 / c2 + 2, DEVINDER) + 2.0;	a2 = fmod(b2 / d2 + 3, DEVINDER) + 3.0;	a3 = fmod(a4 / c3 + 4, DEVINDER) + 4.0;	a4 = fmod(f4 / d5 + 5, DEVINDER) + 5.0;	a5 = fmod(b5 / g3 + 6, DEVINDER) + 6.0;
		b1 = fmod(a1 / b3 + 7, DEVINDER) + 7.0;	b2 = fmod(c2 / d5 + 8, DEVINDER) + 8.0;	b3 = fmod(h3 / e3 + 9, DEVINDER) + 9.0;	b4 = fmod(f2 / a4 + 2, DEVINDER) + 2.0;	b5 = fmod(b2 / d5 + 3, DEVINDER) + 3.0;
		c1 = fmod(d1 / e5 + 4, DEVINDER) + 4.0;	c2 = fmod(h2 / f2 + 5, DEVINDER) + 5.0;	c3 = fmod(d4 / a3 + 6, DEVINDER) + 6.0;	c4 = fmod(d4 / c1 + 7, DEVINDER) + 7.0;	c5 = fmod(f1 / f5 + 8, DEVINDER) + 8.0;
		d1 = fmod(a4 / a1 + 9, DEVINDER) + 9.0;	d2 = fmod(g2 / f3 + 2, DEVINDER) + 2.0;	d3 = fmod(a1 / b5 + 3, DEVINDER) + 3.0;	d4 = fmod(b4 / h4 + 4, DEVINDER) + 4.0;	d5 = fmod(c5 / b1 + 5, DEVINDER) + 5.0;
		e1 = fmod(e2 / e3 + 6, DEVINDER) + 6.0;	e2 = fmod(f3 / g2 + 7, DEVINDER) + 7.0;	e3 = fmod(h1 / h3 + 8, DEVINDER) + 8.0;	e4 = fmod(g1 / a4 + 9, DEVINDER) + 9.0;	e5 = fmod(b1 / c5 + 2, DEVINDER) + 2.0;
		f1 = fmod(g3 / h5 + 3, DEVINDER) + 3.0;	f2 = fmod(g4 / h1 + 4, DEVINDER) + 4.0;	f3 = fmod(e3 / e5 + 5, DEVINDER) + 5.0;	f4 = fmod(g1 / h4 + 6, DEVINDER) + 6.0;	f5 = fmod(b5 / c2 + 7, DEVINDER) + 7.0;
		g1 = fmod(b1 / e2 + 8, DEVINDER) + 8.0;	g2 = fmod(h2 / e3 + 9, DEVINDER) + 9.0;	g3 = fmod(h3 / e4 + 2, DEVINDER) + 2.0;	g4 = fmod(c2 / e5 + 3, DEVINDER) + 3.0;	g5 = fmod(h5 / e5 + 4, DEVINDER) + 4.0;
		h1 = fmod(a1 / b1 + 5, DEVINDER) + 5.0;	h2 = fmod(e2 / f5 + 6, DEVINDER) + 6.0;	h3 = fmod(f3 / f2 + 7, DEVINDER) + 7.0;	h4 = fmod(a4 / a1 + 8, DEVINDER) + 8.0;	h5 = fmod(e5 / h5 + 9, DEVINDER) + 9.0;
	}

	FinishTime = high_resolution_clock::now();
	duration<double> result = duration_cast<duration<double>>(FinishTime - StartTime);
	return result.count();
}

template<typename Type>
void FloatPointType<Type>::Test()
{
	double Empty = this.EmptyLoop();
	double EmptyDiv = this.EmptyLoopDiv();

	TimeTotalPlus = TestPlus();

	Plus = NUMB_OF_VAR * ITER_LOOP_FLOAT / (TimeTotalPlus - Empty);

	TimeTotalMinus = TestMinus();

	Minus = NUMB_OF_VAR * ITER_LOOP_FLOAT / (TimeTotalMinus - Empty);

	TimeTotalMult = TestMult();

	Mult = NUMB_OF_VAR * ITER_LOOP_FLOAT / (TimeTotalMult - Empty);

	TimeTotalDiv = TestDiv;

	Div = NUMB_OF_VAR * ITER_LOOP_FLOAT / (TimeTotalDiv - EmptyDiv);

	this.ShowAll();
}

template<typename Type>
FloatPointType<Type>::FloatPointType()
{
	Name = typeid(Type).name();

	a1 = (rand() % SCHAR_MAX) + 2, a2 = (rand() % SCHAR_MAX) + 2, a3 = (rand() % SCHAR_MAX) + 2, a4 = (rand() % SCHAR_MAX) + 2, a5 = (rand() % SCHAR_MAX) + 2;
	b1 = (rand() % SCHAR_MAX) + 2, b2 = (rand() % SCHAR_MAX) + 2, b3 = (rand() % SCHAR_MAX) + 2, b4 = (rand() % SCHAR_MAX) + 2, b5 = (rand() % SCHAR_MAX) + 2;
	c1 = (rand() % SCHAR_MAX) + 2, c2 = (rand() % SCHAR_MAX) + 2, c3 = (rand() % SCHAR_MAX) + 2, c4 = (rand() % SCHAR_MAX) + 2, c5 = (rand() % SCHAR_MAX) + 2;
	d1 = (rand() % SCHAR_MAX) + 2, d2 = (rand() % SCHAR_MAX) + 2, d3 = (rand() % SCHAR_MAX) + 2, d4 = (rand() % SCHAR_MAX) + 2, d5 = (rand() % SCHAR_MAX) + 2;
	e1 = (rand() % SCHAR_MAX) + 2, e2 = (rand() % SCHAR_MAX) + 2, e3 = (rand() % SCHAR_MAX) + 2, e4 = (rand() % SCHAR_MAX) + 2, e5 = (rand() % SCHAR_MAX) + 2;
	f1 = (rand() % SCHAR_MAX) + 2, f2 = (rand() % SCHAR_MAX) + 2, f3 = (rand() % SCHAR_MAX) + 2, f4 = (rand() % SCHAR_MAX) + 2, f5 = (rand() % SCHAR_MAX) + 2;
	g1 = (rand() % SCHAR_MAX) + 2, g2 = (rand() % SCHAR_MAX) + 2, g3 = (rand() % SCHAR_MAX) + 2, g4 = (rand() % SCHAR_MAX) + 2, g5 = (rand() % SCHAR_MAX) + 2;
	h1 = (rand() % SCHAR_MAX) + 2, h2 = (rand() % SCHAR_MAX) + 2, h3 = (rand() % SCHAR_MAX) + 2, h4 = (rand() % SCHAR_MAX) + 2, h5 = (rand() % SCHAR_MAX) + 2;
}








template <typename Type>
FloatPointType<Type>::~FloatPointType()
{
}

