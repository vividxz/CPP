#include <iostream>
using namespace std;

class complex;

class calculate{
public:
  int complexRealSum(complex , complex);
  int complexImagSum(complex , complex);
};

class complex{
  int real;
  int imag;
public:
   void setdata(int a, int b){
    real = a;
    imag = b;
  }
  void displaydata(void){
    cout<<real<<" + "<<imag<<"i"<<endl;
  }
  friend int calculate ::complexRealSum(complex o1, complex o2);
  friend int calculate ::complexImagSum(complex o1, complex o2);
};

int calculate::complexRealSum(complex o1, complex o2){
  return o1.real+o2.real;
}
int calculate::complexImagSum(complex o1, complex o2){
  return o1.imag+o2.imag;
}

int main()
{
  complex c1, c2, csum;
  c1.setdata(2,5);
  c2.setdata(7,9);
  c1.displaydata();
  c2.displaydata();

  calculate calc;
  cout<<".......\n\n";
  csum.setdata(calc.complexRealSum(c1 , c2) , calc.complexImagSum(c1, c2));
  csum.displaydata();
}
