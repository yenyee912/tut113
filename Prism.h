#ifndef PRISM
#define PRISM

#include <iostream>
using namespace std;

class Cube;
class Prism:public Shape{ // inheritance
	private:
		int vol;


	public:
		void print(); //print l, w, h (from shape.h) & volume
		void setDimension(int, int, int); //set the value of h, w, l
		int calculateVolume();
        int calculateSurfaceArea();
		Prism(){vol=0;}
		Prism(int, int, int, int);
		~Prism(){vol=0;};
};

#endif
