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
  double vtheta();
  double vphi();

  //setters
  void setvx (double vx);
  void setvy (double vy);
  void setvz (double vz);
  void setxyz (double vx, double vy, double vz);
  // void setvmag (double vmag);

  void printxyz();
  void magnitude();
  void polartheta();
  void polarphi();  
  
  void printmag();
  void printpolar();

  void convraddeg();
    
 private:
    double vx_;
    double vy_;
    double vz_;
    double vmag_;
    double vtheta_;
    double vphi_;
};