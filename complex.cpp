/*
   Code modified by Shrikant
*/

#include<iostream>
#include<conio.h>

using namespace std;

class Complex
{
    int real;    // this is real part of complex number
    int img;     // this is imagionary part of complex number

     public:
        void setdata(int r,int i)
        {
            real=r;
            img=i;
        }     

        void showdata()
        {
            cout<<"\n"<<real<<"+"<<img<<"i";

        }

        void sum(Complex obj1,Complex obj2)
        {

            real=obj1.real+obj2.real;
            img=obj1.img+obj2.img;

        }
};

// this is main function
int main()
{
    Complex c1,c2,c3;

    c1.setdata(3,5);
    c2.setdata(3,6);
    c3.sum(c1,c2);

    c1.showdata();
    c2.showdata();

    c3.showdata();

    getch();

    return 0;
}
