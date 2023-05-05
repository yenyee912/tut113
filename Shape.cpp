#include <iostream>
#include "SHAPE.h"
using namespace std;

//overloading constructor
Shape::Shape(int x, int y, int z)
{
	h = x;
	w = y;
	l = z;
}

void Shape::print()
{
	cout << "\nThe value of h is: " << h;
	cout << "\nThe value of w is: " << w;
	cout << "\nThe value of l is: " << l;
}

void Shape::setVal(int x, int y, int z)
{
	h = x;
	w = y;
	l = z;
}

void Shape::getHW(int& height, int& width)
{
	height = h;
	width = w;
}


