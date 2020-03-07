#ifndef Vector_h
#define Vector_h
#include <iostream>
using namespace std;
class Vector{
    double *r;
    int n;
public:
    Vector();
    Vector(double *r, int n);
    Vector(const Vector & R);
    Vector(Vector&& R);
    ~Vector();
    double & operator[](int num);
    Vector & operator=(Vector& R1);
    friend ostream & operator<<(ostream&out,Vector& R2);
    friend istream & operator>>(istream&in,Vector& R2);
    friend Vector & operator*(Vector& R3,double k);
};
#endif /*Vector_h*/
