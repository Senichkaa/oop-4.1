//Circle.cpp
#include "Circle.h"

Circle::Circle()
	:Figure(0)
{
}

Circle::Circle(int a)
	: Figure(a)
{
}

double Circle::Perimeter()
{
	const double PI = atan(1) * 4;
	double P = 2 * PI * get_a();
	return P;
}

double Circle::Square()
{
	const double PI = atan(1) * 4;
	double S = PI * get_a() * get_a();
	return S;
}

ostream& Circle::Print(ostream& out) const
{
	out << "Raduis= " << get_a() << endl;
	out << "Circle is visiable." << endl;
	return out;
}
