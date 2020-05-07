#include<iostream>
using namespace std;
class Complex{
int real,imaginary;
public:


    Complex(int re,int im)
    {
        real=re;
        imaginary=im;
    }
    void add(Complex e)
    {
        real=real+e.real;
        imaginary=imaginary+e.imaginary;
    }
    void multiply(Complex e)
    {int re,im;

       re=(real*e.real)+(imaginary*e.imaginary*(-1));
       im=(real*e.imaginary)+(imaginary*e.real);
       real=re;
       imaginary=im;

    }
    void print()
    {
        cout<<real<<"+"<<imaginary<<"i";

    }



};
