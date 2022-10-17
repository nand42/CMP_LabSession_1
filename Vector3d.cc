// Vector3d.cc, implementation of the vector3d class
#include "Vector3d.h"
#include <iostream>
#include <math.h>
using namespace std;

//constructor
Vector3d::Vector3d() {
  vx_ = 0;
  vy_ = 0;
  vz_ = 0;
  vmag_ = 0;
}
//getters
double Vector3d::vx() {return vx_; };
double Vector3d::vy() {return vy_; };
double Vector3d::vz() {return vz_; };
double Vector3d::vmag() {return vmag_;};
//setters
void Vector3d::setvx (double vx) {vx_ = vx;};
void Vector3d::setvy (double vy) {vy_ = vy;};
void Vector3d::setvz (double vz) {vz_ = vz;};
void Vector3d::setxyz (double vx, double vy, double vz) {
  vx_ = vx; 
  vy_ = vy;
  vz_ = vz;
  };
void Vector3d::printxyz() {
  cout << "Vector: (" << vx_ << ", " << vy_ << ", " << vz_ << ")" << endl;
  };
void Vector3d::printmag() {
  cout << "Vector (" << vx_ << ", " << vy_ << ", " << vz_ << ")'s magnitude = " << vmag_ << endl;
  };

void Vector3d::magnitude() {
  vmag_ = sqrt(vx_*vx_ + vy_*vy_ + vz_*vz_);
};

