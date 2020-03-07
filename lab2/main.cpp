#include <iostream>
#include <fstream>
#include <cstdlib>
#include "Vector.h"
using namespace std;
Vector & operator*(Vector& R3,double k){
    double *f=new double[R3.n];
    for (int i=0;i<R3.n;i++){
        f[i]=k*R3.r[i];
    }
    Vector *New=new Vector(f,R3.n);
    delete[] f;
    return *New;
}
ostream & operator<<(ostream&out,Vector& R2){
    for (int i=0;i<R2.n;i++){
        out <<R2.r[i] <<" ";
    }
    out <<endl;
    return out;
}
istream & operator>>(istream&in,Vector& R2){
    in>>R2.n;
    for (int i=0;i<R2.n;i++){
        in >>R2.r[i];
    }
    return in;
}
int main(){
    int n;
    ifstream fin("Input.txt");
    if (!fin){
            cout << endl<< "Error, file not found"<< endl;
            return 1;
       }
    fin>>n;
    double *k=new double[n];
    for (int i=0;i<n;i++){
        fin>>k[i];
    }
    fin.close();
    ofstream fout("Output.txt");
    Vector N(k,n);
    for (int i=0;i<n;i++){
        fout <<N[i];
    }
    fout <<endl;
    Vector N1;
    N1=operator*(N,((rand()%1000)/10));
    fout <<N1;
    fout.close();
    return 0;
}

