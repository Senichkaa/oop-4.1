//Circle.h
#pragma once
#include "Figure.h"
class Circle : public Figure
{
public:
	Circle();
	Circle(int a);

	virtual double Perimeter();
	virtual double Square();

	virtual ostream& Print(ostream& out) const;
};

