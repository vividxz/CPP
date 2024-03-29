#include <iostream>
using namespace std;

class Base{
protected:
  int a = 50;
private:
  int b = 60;
};

/*
                    Private mode       Protected mode         Public mode
Private members     Not inheritable    Not inheritable        Not inheritable
Protected members   Private member     Protected member       Protected member
Public members      Private member     Protected member       Public member
*/

class Derived :public Base{
public:
int getProtected(void){
  return a;
}
};

int main()
{
  Base b1;
  Derived d1;
  // cout<<b1.a; -->> Shows error as a is protected in Base class
  // cout<<d1.a; -->> Shows erroe as a is protected in Derived class
  cout<<d1.getProtected();
}
