#ifndef SHAPE
#define SHAPE

#include <iostream>
using namespace std;

class Shape{
	private:
		int h;
		int w;
	
	protected:
		int l; // can freely access within the class derived from shape
		
	public:
		void print();
		void setVal (int, int, int); //assign value to each member variables
		void getHW(int&, int&);
		
		//constructor
		Shape(){h=2; w=2; l =2;}
		Shape(int, int, int);
		//destructor
		~Shape() {h=0; w=0; l=0;}
};

#endif


