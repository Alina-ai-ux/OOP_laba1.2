//Circle.h
// заголовний файл Ц визначенн€ класу
#pragma once
#include <string>
using namespace std;
class Circle
{
private:
	const double Pi = 3.14;
	double x;
	double y;
	double R;
	double length;
	double square;
public:
	double getX() const { return x; }
	double getY() const { return y; }
	double getR() const { return R; }
	double Length() const {return  2 * Pi * R;}
	double Square() const { return  Pi * R * R; };
	void setX(double);
	void setY(double);
	bool setR(double);
};
