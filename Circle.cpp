//  Circle.cpp
// פאיכ נואכ³חאצ³¿ – נואכ³חאצ³ÿ לועמה³ג ךכאסף
#include "Circle.h"
#include <iostream>
using namespace std;
void Circle::setX(double value)
{
	x = value;
}
void Circle::setY(double value)
{
	y = value;
}
bool Circle::setR(double value)
{
	if (value > 0)
	{
		R = value;
		return true;
	}
	else
	{
		R = 0;
		return false;
	}
	
}