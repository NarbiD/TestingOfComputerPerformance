#include "DataTypes.h"

template<typename Type>
DataTypes<Type>::DataTypes(std::string name)
{
	Name = name;

	a1 = (rand() % SCHAR_MAX) + 2, a2 = (rand() % SCHAR_MAX) + 2, a3 = (rand() % SCHAR_MAX) + 2, a4 = (rand() % SCHAR_MAX) + 2, a5 = (rand() % SCHAR_MAX) + 2;
	b1 = (rand() % SCHAR_MAX) + 2, b2 = (rand() % SCHAR_MAX) + 2, b3 = (rand() % SCHAR_MAX) + 2, b4 = (rand() % SCHAR_MAX) + 2, b5 = (rand() % SCHAR_MAX) + 2;
	c1 = (rand() % SCHAR_MAX) + 2, c2 = (rand() % SCHAR_MAX) + 2, c3 = (rand() % SCHAR_MAX) + 2, c4 = (rand() % SCHAR_MAX) + 2, c5 = (rand() % SCHAR_MAX) + 2;
	d1 = (rand() % SCHAR_MAX) + 2, d2 = (rand() % SCHAR_MAX) + 2, d3 = (rand() % SCHAR_MAX) + 2, d4 = (rand() % SCHAR_MAX) + 2, d5 = (rand() % SCHAR_MAX) + 2;
	e1 = (rand() % SCHAR_MAX) + 2, e2 = (rand() % SCHAR_MAX) + 2, e3 = (rand() % SCHAR_MAX) + 2, e4 = (rand() % SCHAR_MAX) + 2, e5 = (rand() % SCHAR_MAX) + 2;
	f1 = (rand() % SCHAR_MAX) + 2, f2 = (rand() % SCHAR_MAX) + 2, f3 = (rand() % SCHAR_MAX) + 2, f4 = (rand() % SCHAR_MAX) + 2, f5 = (rand() % SCHAR_MAX) + 2;
	g1 = (rand() % SCHAR_MAX) + 2, g2 = (rand() % SCHAR_MAX) + 2, g3 = (rand() % SCHAR_MAX) + 2, g4 = (rand() % SCHAR_MAX) + 2, g5 = (rand() % SCHAR_MAX) + 2;
	h1 = (rand() % SCHAR_MAX) + 2, h2 = (rand() % SCHAR_MAX) + 2, h3 = (rand() % SCHAR_MAX) + 2, h4 = (rand() % SCHAR_MAX) + 2, h5 = (rand() % SCHAR_MAX) + 2;
}

template<typename Type>
DataTypes<Type>::~DataTypes()
{
}
