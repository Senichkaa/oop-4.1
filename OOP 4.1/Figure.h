//Figure.h
#pragma once
#include <iostream>
#include <typeinfo>

using namespace std;

class Figure
{
private:
	int a;
public:
	Figure();
	Figure(int a);

	int get_a() const { return a; }
	void set_a(int value) { a = value; }

	virtual double Perimeter() = 0;
	virtual double Square() = 0;

	virtual ostream& Print(ostream& out) const = 0;
};

