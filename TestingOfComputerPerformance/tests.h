#pragma once

//only assignments
template <typename T>
double SimpleEmptyLoop(bool status, T a1, T a2, T a3, T a4, T a5, T b1, T b2, T b3, T b4, T b5, T c1, T c2, T c3, T c4, T c5,
	T d1, T d2, T d3, T d4, T d5, T e1, T e2, T e3, T e4, T e5, T f1, T f2, T f3, T f4, T f5,
	T g1, T g2, T g3, T g4, T g5, T h1, T h2, T h3, T h4, T h5);

//empty loop special for multtiplication
template <typename T>
double EmptyLoopMult(bool status, T a1, T a2, T a3, T a4, T a5, T b1, T b2, T b3, T b4, T b5, T c1, T c2, T c3, T c4, T c5,
	T d1, T d2, T d3, T d4, T d5, T e1, T e2, T e3, T e4, T e5, T f1, T f2, T f3, T f4, T f5,
	T g1, T g2, T g3, T g4, T g5, T h1, T h2, T h3, T h4, T h5);

//empty loop special for devision
template <typename T>
double EmptyLoopDiv(bool status, T a1, T a2, T a3, T a4, T a5, T b1, T b2, T b3, T b4, T b5, T c1, T c2, T c3, T c4, T c5,
	T d1, T d2, T d3, T d4, T d5, T e1, T e2, T e3, T e4, T e5, T f1, T f2, T f3, T f4, T f5,
	T g1, T g2, T g3, T g4, T g5, T h1, T h2, T h3, T h4, T h5);

//test operation "PLUS"
template<typename T>
double TestPlusIntegral(bool status, T a1, T a2, T a3, T a4, T a5, T b1, T b2, T b3, T b4, T b5, T c1, T c2, T c3, T c4, T c5,
	T d1, T d2, T d3, T d4, T d5, T e1, T e2, T e3, T e4, T e5, T f1, T f2, T f3, T f4, T f5,
	T g1, T g2, T g3, T g4, T g5, T h1, T h2, T h3, T h4, T h5);

//test operation "MINUS"
template<typename T>
double TestMinusIntegral(bool status, T a1, T a2, T a3, T a4, T a5, T b1, T b2, T b3, T b4, T b5, T c1, T c2, T c3, T c4, T c5,
	T d1, T d2, T d3, T d4, T d5, T e1, T e2, T e3, T e4, T e5, T f1, T f2, T f3, T f4, T f5,
	T g1, T g2, T g3, T g4, T g5, T h1, T h2, T h3, T h4, T h5);

//test operation "MULTIPLICATION"
template<typename T>
double TestMultIntegral(bool status, T a1, T a2, T a3, T a4, T a5, T b1, T b2, T b3, T b4, T b5, T c1, T c2, T c3, T c4, T c5,
	T d1, T d2, T d3, T d4, T d5, T e1, T e2, T e3, T e4, T e5, T f1, T f2, T f3, T f4, T f5,
	T g1, T g2, T g3, T g4, T g5, T h1, T h2, T h3, T h4, T h5);

//test operation "DIVISION"
template<typename T>
double TestDivIntegral(bool status, T a1, T a2, T a3, T a4, T a5, T b1, T b2, T b3, T b4, T b5, T c1, T c2, T c3, T c4, T c5,
	T d1, T d2, T d3, T d4, T d5, T e1, T e2, T e3, T e4, T e5, T f1, T f2, T f3, T f4, T f5,
	T g1, T g2, T g3, T g4, T g5, T h1, T h2, T h3, T h4, T h5);


void testChar(bool& status);
void testInt(bool& status);
void testLong(bool& status);
void testFloat();
void testDouble();
