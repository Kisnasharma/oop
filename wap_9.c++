/*
9. Create a class called Complex for performing arithmetic with complex numbers. Write a driver program
to test your class. Complex numbers have the form realPart + imaginaryPart * i
Provide public member functions for each of the following:
a) Addition of two Complex numbers: The real parts are added together and the imaginary parts are
added together.
b) Subtraction of two Complex numbers: The real part of the right operand is subtracted from the real
part of the left operand and the imaginary part of the right operand is subtracted from the
imaginary part of the left operand.
c) Printing Complex numbers in the form (a, b) where a is the
real part and b is the imaginary part.
*/
#include<iostream>
using namespace std;
class Complex{
    int real,img;
public:
    Complex (){ // default
        real = 0;
        img = 0;
    }

    Complex(int real, int img){ // parameterized
        this->real = real;
        this->img = img;
    }

    int getReal(){
        return real;
    }
    int getImg(){
        return img;
    }

    void addComplex(Complex c1){
    int resReal = c1.getReal() + getReal();
    int resImg = c1.getImg() + getImg();
    cout<<"("<<resReal<<","<<resImg<<")"<<endl;
    return ;
    }

    void subComplex(Complex c1){
    int resReal = getReal() - c1.getReal();
    int resImg = getImg() - c1.getImg();
    cout<<"("<<resReal<<","<<resImg<<")"<<endl;
    return ;
    }

};


int main(){
    Complex c1(2,3);
    Complex c2(3,4);

    c1.addComplex(c2);
    c1.subComplex(c2);

}