// Source.cpp
// головний файл проекту – функція main
#include <iostream>
#include "Circle.h"
using namespace std;
int main()
{
	Circle c;
	c.setX(2.5);
	c.setY(2.3);
	c.setR(2.7);
	cout << "x ="<< c.getX() << endl;
	cout << "y =" << c.getY() << endl;
	cout << "R =" << c.getR() << endl;
	cout << "length = " << c.Length() << endl;
	cout << "square = " << c.Square() << endl;
	Circle c1;
	double x, y,R;
	cout << "X?" << endl;
	cin >> x;
	cout << "Y?" << endl;
	cin >> y;
	cout << "R?" << endl;
	cin >> R;
	c1.setX(x);
	c1.setY(y);
	c1.setR(R);
	cout << "x =" << c1.getX() << endl;
	cout << "y =" << c1.getY() << endl;
	cout << "R =" << c1.getR() << endl;
	cout << "length = " << c1.Length() << endl;
	cout << "square = " << c1.Square() << endl;
	return 0;
}