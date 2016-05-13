#include "IntegerType.h"

using namespace std::chrono;


template <typename Type>
double IntegerType<Type>::EmptyLoop()
{
	StartTime = high_resolution_clock::now();

	for (int i = 0; i < ITER_LOOP; ++i)
	{
		a1 = b2;	a2 = b2;	a3 = a4;	a4 = b9;	a5 = b5;
		b1 = a1;	b2 = c2;	b3 = d8;	b4 = b7;	b5 = b2;
		c1 = d1;	c2 = d7;	c3 = d4;	c4 = d4;	c5 = b6;
		d1 = a4;	d2 = c7;	d3 = a1;	d4 = b4;	d5 = c5;
		a6 = a7;	a7 = b8;	a8 = d6;	a9 = c6;	a0 = b1;
		b6 = c8;	b7 = c9;	b8 = a8;	b9 = c6;	b0 = b5;
		c6 = b1;	c7 = d7;	c8 = d8;	c9 = c2;	c0 = d0;
		d6 = a1;	d7 = a7;	d8 = b8;	d9 = a4;	d0 = a0;
	}

	FinishTime = high_resolution_clock::now();
	duration<double> result = duration_cast<duration<double>>(FinishTime - StartTime);
	return result.count();
}


template <typename Type>
double IntegerType<Type>::EmptyLoopMult()
{
	StartTime = high_resolution_clock::now();

	Type temp;
	for (int i = 0; i < ITER_LOOP; ++i)
	{
		temp = b1; a1 = (temp == 0 ? 5 : temp);	 temp = b2; a2 = (temp == 0 ? 7 : temp);  temp = a4; a3 = (temp == 0 ? 11 : temp);
		temp = b9; a4 = (temp == 0 ? 13 : temp); temp = b5; a5 = (temp == 0 ? 17 : temp);
		temp = a1; b1 = (temp == 0 ? 19 : temp); temp = c2; b2 = (temp == 0 ? 23 : temp); temp = d8; b3 = (temp == 0 ? 27 : temp);
		temp = b7; b4 = (temp == 0 ? 29 : temp); temp = b2; b5 = (temp == 0 ? 31 : temp);
		temp = d1; c1 = (temp == 0 ? 37 : temp); temp = d7; c2 = (temp == 0 ? 41 : temp); temp = d4; c3 = (temp == 0 ? 43 : temp);
		temp = d4; c4 = (temp == 0 ? 47 : temp); temp = b6; c5 = (temp == 0 ? 5 : temp);
		temp = a4; d1 = (temp == 0 ? 7 : temp);  temp = c7; d2 = (temp == 0 ? 11 : temp); temp = a1; d3 = (temp == 0 ? 13 : temp);
		temp = b4; d4 = (temp == 0 ? 17 : temp); temp = c5; d5 = (temp == 0 ? 19 : temp);
		temp = a7; a6 = (temp == 0 ? 23 : temp); temp = b8; a7 = (temp == 0 ? 27 : temp); temp = d6; a8 = (temp == 0 ? 29 : temp);
		temp = c6; a9 = (temp == 0 ? 31 : temp); temp = b1; a0 = (temp == 0 ? 37 : temp);
		temp = c8; b6 = (temp == 0 ? 41 : temp); temp = c9; b7 = (temp == 0 ? 43 : temp); temp = a8; b8 = (temp == 0 ? 47 : temp);
		temp = c6; b9 = (temp == 0 ? 5 : temp);  temp = b5; b0 = (temp == 0 ? 7 : temp);
		temp = b1; c6 = (temp == 0 ? 11 : temp); temp = d7; c7 = (temp == 0 ? 13 : temp); temp = d8; c8 = (temp == 0 ? 17 : temp);
		temp = c2; c9 = (temp == 0 ? 19 : temp); temp = d0; c0 = (temp == 0 ? 23 : temp);
		temp = a1; d6 = (temp == 0 ? 27 : temp); temp = a7; d7 = (temp == 0 ? 29 : temp); temp = b8; d8 = (temp == 0 ? 31 : temp);
		temp = a4; d9 = (temp == 0 ? 41 : temp); temp = a0; d0 = (temp == 0 ? 43 : temp);
	}

	FinishTime = high_resolution_clock::now();
	duration<double> result = duration_cast<duration<double>>(FinishTime - StartTime);
	return result.count();
}


template <typename Type>
double IntegerType<Type>::EmptyLoopDiv()
{
	StartTime = high_resolution_clock::now();

	for (int i = 0; i < ITER_LOOP; ++i)
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
double IntegerType<Type>::EmptyLoopIncDec()
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


template<typename Type>
double IntegerType<Type>::TestPlus()
{
	StartTime = high_resolution_clock::now();

	for (int i = 0; i < ITER_LOOP; ++i)
	{
		a1 = b2 + c2;	a2 = b2 + d2;	a3 = a4 + c3;	a4 = b9 + d5;	a5 = b5 + c8;
		b1 = a1 + b3;	b2 = c2 + d5;	b3 = d8 + a8;	b4 = b7 + a4;	b5 = b2 + d5;
		c1 = d1 + a0;	c2 = d7 + b7;	c3 = d4 + a3;	c4 = d4 + c1;	c5 = b6 + b0;
		d1 = a4 + a1;	d2 = c7 + b8;	d3 = a1 + b5;	d4 = b4 + d9;	d5 = c5 + b1;
		a6 = a7 + a8;	a7 = b8 + c7;	a8 = d6 + d8;	a9 = c6 + a4;	a0 = b1 + c5;
		b6 = c8 + d0;	b7 = c9 + d6;	b8 = a8 + a0;	b9 = c6 + d9;	b0 = b5 + c2;
		c6 = b1 + a7;	c7 = d7 + a8;	c8 = d8 + a9;	c9 = c2 + a0;	c0 = d0 + a0;
		d6 = a1 + b1;	d7 = a7 + b0;	d8 = b8 + b7;	d9 = a4 + a1;	d0 = a0 + d0;
	}

	FinishTime = high_resolution_clock::now();
	duration<double> result = duration_cast<duration<double>>(FinishTime - StartTime);
	return result.count();
}

template<typename Type>
double IntegerType<Type>::TestMinus()
{
	StartTime = high_resolution_clock::now();

	for (int i = 0; i < ITER_LOOP; ++i)
	{
		a1 = b2 - c2;	a2 = b2 - d2;	a3 = a4 - c3;	a4 = b9 - d5;	a5 = b5 - c8;
		b1 = a1 - b3;	b2 = c2 - d5;	b3 = d8 - a8;	b4 = b7 - a4;	b5 = b2 - d5;
		c1 = d1 - a0;	c2 = d7 - b7;	c3 = d4 - a3;	c4 = d4 - c1;	c5 = b6 - b0;
		d1 = a4 - a1;	d2 = c7 - b8;	d3 = a1 - b5;	d4 = b4 - d9;	d5 = c5 - b1;
		a6 = a7 - a8;	a7 = b8 - c7;	a8 = d6 - d8;	a9 = c6 - a4;	a0 = b1 - c5;
		b6 = c8 - d0;	b7 = c9 - d6;	b8 = a8 - a0;	b9 = c6 - d9;	b0 = b5 - c2;
		c6 = b1 - a7;	c7 = d7 - a8;	c8 = d8 - a9;	c9 = c2 - a0;	c0 = d0 - a0;
		d6 = a1 - b1;	d7 = a7 - b0;	d8 = b8 - b7;	d9 = a4 - a1;	d0 = a0 - d0;
	}

	FinishTime = high_resolution_clock::now();
	duration<double> result = duration_cast<duration<double>>(FinishTime - StartTime);
	return result.count();
}

template<typename Type>
double IntegerType<Type>::TestMult()
{
	StartTime = high_resolution_clock::now();

	Type temp;
	for (int i = 0; i < ITER_LOOP; ++i)
	{
		temp = b2*c2; a1 = (temp == 0 ? 5 : temp); 	temp = b2*d2; a2 = (temp == 0 ? 7 : temp); temp = a4*c3; a3 = (temp == 0 ? 11 : temp);
		temp = b9*d5; a4 = (temp == 0 ? 13 : temp);	temp = b5*c8; a5 = (temp == 0 ? 17 : temp);
		temp = a1*b3; b1 = (temp == 0 ? 19 : temp);	temp = c2*d5; b2 = (temp == 0 ? 23 : temp);	temp = d8*a8; b3 = (temp == 0 ? 27 : temp);
		temp = b7*a4; b4 = (temp == 0 ? 29 : temp);	temp = b2*d5; b5 = (temp == 0 ? 31 : temp);
		temp = d1*a0; c1 = (temp == 0 ? 37 : temp);	temp = d7*b7; c2 = (temp == 0 ? 41 : temp);	temp = d4*a3; c3 = (temp == 0 ? 43 : temp);
		temp = d4*c1; c4 = (temp == 0 ? 47 : temp);	temp = b6*b0; c5 = (temp == 0 ? 5 : temp);
		temp = a4*a1; d1 = (temp == 0 ? 7 : temp);	temp = c7*b8; d2 = (temp == 0 ? 11 : temp);	temp = a1*b5; d3 = (temp == 0 ? 13 : temp);
		temp = b4*d9; d4 = (temp == 0 ? 17 : temp);	temp = c5*d1; d5 = (temp == 0 ? 19 : temp);
		temp = a7*a8; a6 = (temp == 0 ? 23 : temp);	temp = b8*c7; a7 = (temp == 0 ? 27 : temp);	temp = d6*d8; a8 = (temp == 0 ? 29 : temp);
		temp = c6*a4; a9 = (temp == 0 ? 31 : temp);	temp = b1*c5; a0 = (temp == 0 ? 37 : temp);
		temp = c8*d0; b6 = (temp == 0 ? 41 : temp);	temp = c9*d6; b7 = (temp == 0 ? 43 : temp);	temp = a8*a0; b8 = (temp == 0 ? 47 : temp);
		temp = c6*d9; b9 = (temp == 0 ? 5 : temp);	temp = b5*c2; b0 = (temp == 0 ? 7 : temp);
		temp = b1*a7; c6 = (temp == 0 ? 11 : temp);	temp = d7*a8; c7 = (temp == 0 ? 13 : temp); temp = d8*a9; c8 = (temp == 0 ? 17 : temp);
		temp = c2*a0; c9 = (temp == 0 ? 19 : temp);	temp = d0*a0; c0 = (temp == 0 ? 23 : temp);
		temp = a1*b2; d6 = (temp == 0 ? 27 : temp);	temp = a7*b0; d7 = (temp == 0 ? 29 : temp);	temp = b8*b7; d8 = (temp == 0 ? 31 : temp);
		temp = a4*a1; d9 = (temp == 0 ? 41 : temp);	temp = a0*d0; d0 = (temp == 0 ? 43 : temp);
	}

	FinishTime = high_resolution_clock::now();
	duration<double> result = duration_cast<duration<double>>(FinishTime - StartTime);
	return result.count();
}

template<typename Type>
double IntegerType<Type>::TestDiv()
{
	StartTime = high_resolution_clock::now();

	srand(time(NULL));
	for (int i = 0; i < ITER_LOOP; ++i)
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
double IntegerType<Type>::TestIncrement()
{
	StartTime = high_resolution_clock::now();

	for (int i = 0; i < ITER_LOOP; ++i)
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
double IntegerType<Type>::TestDecrement()
{
	StartTime = high_resolution_clock::now();

	for (int i = 0; i < ITER_LOOP; ++i)
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
void IntegerType<Type>::SingleTest(double& _plus, double& _minus, double& _mult, double& _div, double& _inc, double& _dec)
{
	do {
		Empty = EmptyLoop();
		TimeTotalPlus = TestPlus();
		TimeTotalMinus = TestMinus();
		
	} while (TimeTotalPlus <= Empty || TimeTotalMinus <= Empty);

	do {
		EmptyIncDec = EmptyLoopIncDec();
		TimeTotalIncrement = TestIncrement();
		TimeTotalDecrement = TestDecrement();
	} while (TimeTotalIncrement <= EmptyIncDec || TimeTotalDecrement <= EmptyIncDec);

	do {
		EmptyMult = EmptyLoopMult();
		TimeTotalMult = TestMult();
	} while (TimeTotalMult <= EmptyMult);

	do {
		EmptyDiv = EmptyLoopDiv();
		TimeTotalDiv = TestDiv();
	} while (TimeTotalDiv <= EmptyDiv);

	_plus = NUMERATOR / fabs(TimeTotalPlus - Empty);
	_minus = NUMERATOR / fabs(TimeTotalMinus - Empty);
	_mult = NUMERATOR / fabs(TimeTotalMult - EmptyMult);
	_div = NUMERATOR / fabs(TimeTotalDiv - EmptyDiv);
	_inc = NUMERATOR / fabs(TimeTotalIncrement - EmptyIncDec);
	_dec = NUMERATOR / fabs(TimeTotalDecrement - EmptyIncDec);
}


template<typename Type>
IntegerType<Type>::IntegerType::~IntegerType()
{
}
