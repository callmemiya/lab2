#include "Vector.h"
using namespace std;
  Vector::Vector(double *r, int n){
      this->n=n;
      this->r=new double[n];
      for (int i=0;i<n;i++) this->r[i]=r[i];
  }
  Vector::Vector(const Vector & R){
        n=R.n;
        r=new double[n];
        for (int i=0;i<n;i++) r[i]=R.r[i];
  }
  Vector::Vector(Vector&& R){
        R.r=nullptr;
        R.n=0;
  }
  Vector::~Vector(){
        if (r!=nullptr) delete[]r;
  }
  Vector:double & operator[](int num){
        return r[num];
  }
  Vector:Vector & operator=(Vector& R1){
        n=R1.n;
        if (r!=nullptr) delete[] r;
        r=new double[n];
        for (int i=0;i<n;i++){
            r[i]=R1.r[i];
        }
        return *this;
  }
