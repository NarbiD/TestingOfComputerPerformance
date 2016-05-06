#include <iostream>
#include <ctime>
#include "tests.h"
#include "view.h"

using namespace std;

int main()
{
	bool status;
	StartMenu(status);

	testChar(status);
	testInt(status);
	testLong(status);
	testFloat(status);
	testDouble(status);

	system("pause");
	return 0;
}