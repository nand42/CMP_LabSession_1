
#include "Vector3d.h"
#include <iostream>
#include <math.h>
using namespace std;
int main () {
  Vector3d v1;
  v1.printxyz(); // print
  v1.setvx(1);
  v1.printxyz(); // print
  v1.setvy(2);
  v1.printxyz(); // print
  v1.setvz(3);
  v1.printxyz(); // print
  v1.setxyz(3,3,4);
  v1.printxyz(); // print
  
  v1.magnitude();
  v1.printmag(); // print
  v1.polartheta();
  v1.polarphi();
  v1.printpolar(); // print
  v1.convraddeg();
  v1.printpolar(); // print
  
  return 0;
}

/*

Vector3d v(1,2,3);

v.magnitude(1,2,);

*/