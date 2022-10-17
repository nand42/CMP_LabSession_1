//Vector3d.h, header file of the datum class
class Vector3d {
 public:
  //constructor
  Vector3d();
  //getters
  double vx();
  double vy();
  double vz();
  double vmag();
  //setters
  void setvx (double vx);
  void setvy (double vy);
  void setvz (double vz);
  void setxyz (double vx, double vy, double vz);
  void setvmag (double vmag);
  void printxyz();
  void printmag();
  void magnitude();
  

 private:
    double vx_;
    double vy_;
    double vz_;
    double vmag_;
};