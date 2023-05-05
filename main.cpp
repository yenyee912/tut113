#include <iostream>
#include "Shape.h"
#include "Prism.h"
#include "Cube.h"

using namespace std;

int main() {

    int a, b, c, d;
    Shape S;

    cout<<"\nWhat values you want to set to Shape S? ";
    cin >> a >> b >> c;
    S.setVal(a, b, c);
    S.print();

    Prism P(2, 4, 6, 0);
    //cout<<"\n\nWhat values you want to set to Prism P? ";
    //cin >> a >> b >> c >> d;
    P.calculateVolume();
    P.print();

    Cube myCube;
    myCube.setDimension(5, 5, 5);
    myCube.calculateVolume();
    myCube.print();


    return 0;
}



