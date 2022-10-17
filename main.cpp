
#include "Vector3d.h"
#include <iostream>
#include <math.h>
using namespace std;
int main () {
  Vector3d v1;
  v1.printxyz();
  v1.setvx(4);
  v1.printxyz();
  v1.setvy(5);
  v1.printxyz();
  v1.setvz(6);
  v1.printxyz();
  v1.setxyz(1,2,3);
  v1.printxyz();
  v1.magnitude();
  v1.printmag();
  return 0;
}

/*

Vector3d v(1,2,3);

v.magnitude(1,2,);

*/