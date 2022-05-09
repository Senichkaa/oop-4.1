//Trapeze.cpp
#include "Trapeze.h"

Trapeze::Trapeze()
	:Figure(0), b(0), c(0), d(0)
{
}

Trapeze::Trapeze(int a, int b, int c, int d)
	: Figure(a), b(b), c(c), d(d)
{
}

double Trapeze::Perimeter()
{
	double P = (get_a() + b + c + d);
	return P;
}

double Trapeze::Square()
{
	int p = (get_a() + b + c + d) / 2;
	double S = (get_a() + b) / abs(get_a() - b) * sqrt((p - get_a()) * (p - b) * (p - get_a() - c)
		* (p - get_a() - d));
	return S;
}

ostream& Trapeze::Print(ostream& out) const
{
	out << "Basic1: " << get_a() << endl;
	out << "Basic2: " << b << endl;
	out << "Side1: " << c << endl;
	out << "Side2: " << d << endl;
	out << "Trapeze is visible." << endl;
	return out;
}
