//Rectangle.cpp
#include "Rectangle.h"

Rectangle::Rectangle()
    :Figure (0), b(0)
{
}

Rectangle::Rectangle(int a, int b)
    : Figure (a), b(b)
{
}

double Rectangle::Perimeter()
{
    double P = 2 * (get_a() + b * 1.0);
    return P;
}

double Rectangle::Square()
{
    double S = 1.0 * get_a() * b;
    return S;
}

ostream& Rectangle::Print(ostream& out) const
{
    out << "Wide: " << get_a() << endl;
    out << "Lenth: " << b << endl;
    out << "Rectangle is visible." << endl;
    return out;
}
