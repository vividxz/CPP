#include <iostream>
using namespace std;

class Y;

class X {
  int data;
public:
  void setdata(int value) {
    data = value;
  }
  void displaydata(void) {
    cout<<data;
  }
  friend void swap(X &o1, Y &o2);
};

class Y {
  int data;
public:
  void setdata(int value) {
    data = value;
  }
  void displaydata(void) {
    cout<<data;
  }
  friend void swap(X &o1, Y &o2);
};

void swap(X & o1 , Y & o2) {
  int temp = o1.data;
  o1.data = o2.data;
  o2.data = temp;
}

int main()
{
  X o1;
  Y o2;
  o1.setdata(5);
  o2.setdata(9);

  cout<<"Data before swap - \n";
  o1.displaydata();
  cout<<endl;
  o2.displaydata();
  cout<<endl;

  swap(o1 , o2);

  cout<<"Data After swap - \n";
  o1.displaydata();
  cout<<endl;
  o2.displaydata();
  cout<<endl;
}
