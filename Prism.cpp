#include <iostream>
#include "SHAPE.h"
#include "PRISM.h"
using namespace std;


void Prism::print(){
	Shape::print();
	cout << "\nVolume: "<<vol << endl;
}	

Prism::Prism(int height, int width, int length, int volume):Shape(height, width, length){
	vol = volume;	
}

int Prism::calculateVolume() {
    int width, height;
    getHW(height, width);
    vol = l* height * width;

    return vol;
}





