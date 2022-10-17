// Vector3d.cc, implementation of the vector3d class
#include "Vector3d.h"
#include <iostream>
#include <math.h>
using namespace std;
#define _USE_MATH_DEFINES

//constructor
Vector3d::Vector3d() {
  vx_ = 0;
  vy_ = 0;
  vz_ = 0;
  vmag_ = 0;
  vtheta_ = 0;
  vphi_ = 0;
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

void Vector3d::printpolar() {
  cout << "Vector (" << vx_ << ", " << vy_ << ", " << vz_ << ") = " \
  "(" << vmag_ << ", " << vtheta_ << ", " << vphi_ << ")" << endl;
  };


void Vector3d::magnitude() {
  vmag_ = sqrt(vx_*vx_ + vy_*vy_ + vz_*vz_);
};

void Vector3d::polartheta() {
  vtheta_ = atan((vx_*vx_ + vy_*vy_)/vz_);
};

void Vector3d::polarphi() {
  if (vx_ > 0) {
    // 1 : x>0 every y
    vphi_ = atan(vy_ / vx_);
  } else if (vx_ < 0) {
    if (vy_ >= 0) {
      // 2 : x < 0 & y >= 0
      vphi_ = atan(vy_ / vx_) + M_PI;
    } else {
      // 3 : x < 0 & y < 0
      vphi_ = atan(vy_ / vx_) - M_PI;
    }
  } else {
    if (vy_ > 0) {
      // 4 : x > 0 & y > 0
      vphi_ = M_PI_2;
    } else if (vy_ < 0) {
      // 5 : x > 0 & y < 0
      vphi_ = (-1) * M_PI_2;
    } else {
      // 6 : x > 0 & y = 0
      vphi_ = 0; // undefined
    }
  }
  
};

void Vector3d::convraddeg(){
  vtheta_ = vtheta_ * (360/(2* M_PI));
  vphi_ = vphi_ * (360/(2* M_PI));
}