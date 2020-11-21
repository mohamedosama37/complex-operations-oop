
#include <iostream>
# include <math.h>

using namespace std;

class Complex{

private:
    float real;
    float imag;
public:
    Complex()
    {
        real=0;
        imag=0;
        cout<<"this is the deauflt constructor"<<endl;
    }

    Complex (float n)
    {
        real=imag=n;
         cout<<"this is the  constructor with one parameter  "<<endl;
    }
    Complex(float r,float i)
    {
        real=r;
        imag=i;
        cout<< "this is overload constructor, with two   parameter"<<endl;
    }

   ~Complex()
   {

           cout<<" the object destructor "<<endl;


    }

void  setreal(float i);
void  setimag (float i);
float getreal ();
float getimag ();
void print();
Complex operator+(Complex c);
Complex operator-(Complex c);
Complex operator+(float x);
Complex operator-(float x);
friend Complex operator +(float x,Complex c);
friend Complex operator -(float x,Complex c);
int operator ==(Complex);
Complex operator+=(Complex);
Complex operator++(int);
Complex operator++();
 operator float();
 friend ostream&operator<<(ostream&out,const Complex&c);
    friend istream&operator>>(istream&in,Complex&c);

    };

  Complex ::operator float()
{
    return real;
}

Complex Complex:: operator++(int)
{
    Complex temp =*this;
    real++;
    return temp;
}
Complex Complex :: operator++()
 {
   real++;
   return *this;


 }
 Complex Complex::   operator+=(Complex c)
 {
        Complex b;
       b. real=b.real+c.real;
        b.imag=b.imag+c.imag;
        return b;

 }

int Complex:: operator ==(Complex c)
{

    if((real == c.real)&&(imag == c.imag))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
istream&operator>>(istream&in,Complex&c)
{
    cout<<"ENTER THE REAL PART"<<endl;
    in>>c.real;
    cout<<"ENTER THE IMAG PART"<<endl;
    in>>c.imag;

}
ostream&operator<<(ostream&out,const Complex&c)
    {
         cout<<c.real<<"+"<<fabs(c.imag)<<"i"<<endl;

    }




Complex Complex:: operator+(Complex c)

{
    Complex b;
    b.real=real+c.real;
    b.imag=imag+c.imag;
    return b;
}


Complex Complex:: operator-(Complex c)

{
    Complex b;
    b.real=real-c.real;
    b.imag=imag-c.imag;
    return b;
}



Complex  Complex::operator+(float x)
{
  Complex b;
  b.real=real+x;
  b.imag=imag+x;
  return b;
}
Complex  Complex :: operator-(float x)
{
  Complex b;
  b.real=real-x;
  b.imag=imag-x;
  return b;
}





Complex operator+(float x, Complex c)
{
    Complex b;
    b.real=c.real+x;
    b.imag=c.imag+x;
    return b;
}

Complex operator-(float x, Complex c)
{
    Complex b;
    b.real=c.real-x;
    b.imag=c.imag-x;
    return b;
}

void  Complex :: setreal(float i)
{
    real=i;
}

void Complex :: setimag(float i)
{
    imag=i;
}

float Complex::getreal()
{
    return real;
}

float Complex :: getimag()
{
    return imag;
}

void  Complex::print()
{
    if(imag>0)

 {
     cout<<real<<"+"<<imag<<"i\n"<<endl;

    }

    else if(imag==0)
    {
        cout<<real<<endl;
    }
    else{
        cout<<real<<"-"<<imag<<"i\n"<<endl;
    }

}
Complex add(Complex c1)
    {
      Complex comp;
        comp.setreal(c1.getreal()+ c1.getreal());
        comp.setimag(c1.getimag()+c1.getimag());
        return comp;
    }

    Complex add(Complex c1, Complex c2)
    {
      Complex comp;
        comp.setreal(c1.getreal()+ c2.getreal());
        comp.setimag(c1.getimag()+c2.getimag());
        return comp;
    }

    Complex sub(Complex  c1)
{
    Complex comp;
    comp.setreal(c1.getreal()-c1.getreal());
    comp.setimag(c1.getimag()-c1.getimag());
    return comp;


}
Complex sub(Complex  c1,  Complex c2)
{
    Complex comp;
    comp.setreal(c1.getreal()-c2.getreal());
    comp.setimag(c1.getimag()-c2.getimag());
    return comp;


}




int main()
{
    Complex c1,c2,c3;
    cin>>c1;
    cin>>c2;
    cin>>c3;
    c3= c1+c2;
    cout<<c3;
    c3=c1-c2;
     cout<<c3;
    c3=c1+5;
     cout<<c3;
    c3=c1-5;
     cout<<c3;
    c3=5+c1;
     cout<<c3;

    c3=5+c1;
     cout<<c3;
    c1==c2;
     cout<<c1;
    c1+=c2;
     cout<<c1;
    ++c1;
     cout<<c1;
    c1++;
     cout<<c1;
    (float) c1;
     cout<<c1;

}
