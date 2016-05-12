#include "FloatPointType.h"
#include "IntegerType.h"

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
double FloatPointType<Type>::EmptyLoopInc()
{
	StartTime = high_resolution_clock::now();

	for (int i = 0; i < ITER_LOOP; ++i)
	{
		a1; b2;	a2; b2;	a3; a4;	a4; f4;	a5; b5;
		b1; a1;	b2; c2;	b3; h3;	b4; f2;	b5; b2;
		c1; d1;	c2; h2;	c3; d4;	c4; d4;	c5; f1;
		d1; a4;	d2; g2;	d3; a1;	d4; b4;	d5; c5;
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
		
		a1 = (c2 == 0 ? 5 : c2);  a2 = (d2 == 0 ? 7 : d2);  a3 = (c3 == 0 ? 11 : c3); a4 = (d5 == 0 ? 13 : d5); a5 = (g3 == 0 ? 17 : g3);
		b1 = (b3 == 0 ? 19 : b3); b2 = (d5 == 0 ? 23 : d5); b3 = (e3 == 0 ? 27 : e3); b4 = (a4 == 0 ? 29 : a4); b5 = (d5 == 0 ? 31 : d5);
		c1 = (e5 == 0 ? 37 : e5); c2 = (f2 == 0 ? 41 : f2); c3 = (a3 == 0 ? 43 : a3); c4 = (c1 == 0 ? 47 : c1); c5 = (f5 == 0 ? 5 : f5);
		d1 = (a1 == 0 ? 7 : a1);  d2 = (f3 == 0 ? 11 : f3);	d3 = (b5 == 0 ? 13 : b5); d4 = (h4 == 0 ? 17 : h4); d5 = (b1 == 0 ? 19 : b1);
		e1 = (e3 == 0 ? 23 : e3); e2 = (g2 == 0 ? 27 : g2); e3 = (h3 == 0 ? 29 : h3); e4 = (a4 == 0 ? 31 : a4); e5 = (c5 == 0 ? 37 : c5);
		f1 = (h5 == 0 ? 41 : h5); f2 = (h1 == 0 ? 43 : h1); f3 = (e5 == 0 ? 47 : e5); f4 = (h4 == 0 ? 5 : h4);  f5 = (c2 == 0 ? 7 : c2);
		g1 = (e2 == 0 ? 11 : e2); g2 = (e3 == 0 ? 13 : e3); g3 = (e4 == 0 ? 17 : e4); g4 = (e5 == 0 ? 19 : e5); g5 = (e5 == 0 ? 23 : e5);
		h1 = (b1 == 0 ? 27 : b1); h2 = (f5 == 0 ? 29 : f5); h3 = (f2 == 0 ? 31 : f2); h4 = (a1 == 0 ? 41 : a1); h5 = (h5 == 0 ? 43 : h5);
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
		e1++;	e2++;	e3++;	e4++;	e5++;
		f1++;	f2++;	f3++;	f4++;	f5++;
		g1++;	g2++;	g3++;	g4++;	g5++;
		h1++;	h2++;	h3++;	h4++;	h5++;
	}

	FinishTime = high_resolution_clock::now();
	duration<double> result = duration_cast<duration<double>>(FinishTime - StartTime);
	return result.count();
}

template<typename Type>
void FloatPointType<Type>::SingleTest(double& _plus, double& _minus, double& _mult, double& _div, double& _inc)
{
	const double NUMERATOR = NUMB_OF_FLOAT_VAR * ITER_LOOP_FLOAT;
	do {
		Empty = EmptyLoop();
		TimeTotalPlus = TestPlus();
		TimeTotalMinus = TestMinus();
		TimeTotalMult = TestMult();
		TimeTotalIncrement = TestIncrement();
	} while (TimeTotalPlus <= Empty || TimeTotalMinus <= Empty || TimeTotalMult <= Empty || TimeTotalIncrement <= EmptyLoopInc());

	do {
		
		TimeTotalIncrement = TestIncrement();
	} while (TimeTotalIncrement <= EmptyLoopInc());

	do {
		EmptyDiv = EmptyLoopDiv();
		TimeTotalDiv = TestDiv();
	} while (TimeTotalDiv <= EmptyDiv);

	_plus = NUMERATOR / (TimeTotalPlus - Empty);
	_minus = NUMERATOR / (TimeTotalMinus - Empty);
	_mult = NUMERATOR / (TimeTotalMult - Empty);
	_div = NUMERATOR / (TimeTotalDiv - EmptyDiv);
	_inc = NUMERATOR / (TimeTotalIncrement - EmptyLoopInc());
}


template <typename Type>
FloatPointType<Type>::~FloatPointType()
{
}



