#ifndef CUBE
#define CUBE
#include "SHAPE.h"

#include <iostream>

class Prism;
class Cube{
	private:
		Shape shape; // composition (compare it carefully with Prism.h)
		int vol;

	public:
		void setDimension(int, int, int);
		void print(); //print vol of the cube
		int calculateVolume();
        int calculateSurfaceArea();
		Cube(){vol=0;}
		~Cube(){vol=0;}


};

#endif
