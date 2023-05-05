#include <iostream>
#include "CUBE.h"
#include "SHAPE.h"

using namespace std;

void Cube::setDimension(int height, int width, int length){
	shape.setVal(height, width, length);
}

void Cube::print() //print vol of the cube
{
	cout<<"\nInside print of Cube";
	shape.print(); // call print() method from Shape class
	cout<< "\nTherefore the volume of the cube is: " << vol << endl;
}

int Cube::calculateVolume()
{
	int height; int width;
	shape.getHW(height, width);
	vol = height * height * height;

    return vol;
}
