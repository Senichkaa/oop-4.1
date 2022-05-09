//Rectangle.h
#pragma once
#include "Figure.h"
class Rectangle : public Figure
{
private:
	int b;
public:
	Rectangle();
	Rectangle(int a, int b);
	
	int get_b() { return b; }
	void set_b(int value) { b = value; }
	
	virtual double Perimeter();
	virtual double Square();

	virtual ostream& Print(ostream& out) const;
};

