#include <iostream>
using namespace std;
class Vector{
    double *r;
    int n;
public:
    Vector(){
        r=nullptr;
        n=0;
    }
    Vector(double *r, int n){
        this->n=n;
        this->r=new double[n];
        for (int i=0;i<n;i++) this->r[i]=r[i];
    }
    Vector(const Vector & R){
        n=R.n;
        r=new double[n];
    }
};
