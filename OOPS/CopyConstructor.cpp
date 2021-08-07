#include <bits/stdc++.h>

class Num {
  int num;
public:
  Num(void){
    num = 0;
  }
  Num(int n) {
    num = n;
  }
  //Copy constructor
  // Num(Num &obj){
  //   std::cout<<"Copy constructor Invoked"<<std::endl;
  //   num = obj.num;
  // }

  void show(void){
    std::cout<<"Number is "<<num<<std::endl;
  }
};



int main()
{
  Num n1,n2,n3(5),n5(n3);
  n1.show();
  n2.show();
  n3.show();

  Num n4 = n3; //Object is copied
  n4.show();
  n5.show(); //Defaut copy constructor Invoked

  // Num n6(n3); //Copy constructor invoked

}
