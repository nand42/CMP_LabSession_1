
#include "Vector3d.h"
#include <iostream>
#include <math.h>
using namespace std;
int main () {
  Vector3d v1; // inizialize v1 as instance
  v1.printxyz(); // print
  v1.setvx(1); // set value single coord
  v1.printxyz(); // print
  v1.setvy(2); // set value single coord
  v1.printxyz(); // print
  v1.setvz(3); // set value single coord
  v1.printxyz(); // print vector cartesian coords
  // override values
  v1.setxyz(3,3,4); // set values all coords
  v1.printxyz(); // print vector coords
  
  v1.magnitude(); // calcolate magnitude 
  v1.printmag(); // print magnitude
  v1.polartheta(); // calcolate theta angle
  v1.polarphi(); // calcolate phi angle
  v1.printpolar(); // print
  v1.convraddeg(); // conversion from rad to deg
  v1.printpolar(); // print vector polar coord
  
  return 0;
}
