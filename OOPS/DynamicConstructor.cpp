#include <bits/stdc++.h>

class BankIntrest{
  int principle , years;
  float rate , returnValue;
public:
  BankIntrest(int , int , int );
  BankIntrest(int , float , int);
  void displayReturn(void){
    std::cout<<"Amount for Rs."
    <<principle<<" for "<<years
    <<" years is Rs."<<returnValue<<"\n";
  }
};

BankIntrest::BankIntrest(int p , int r , int y){
  principle = p;
  rate = r;
  years = y;
  returnValue = principle;
  for(int i = 0 ; i < years ; i++)
    returnValue += (float)returnValue * (float)rate / 100.0;
  std::cout<<"Int one is Invoked\n";
}

BankIntrest::BankIntrest(int p , float r , int y){
  principle = p;
  rate = r;
  years = y;
  returnValue = principle;
  for(int i = 0 ; i < years ; i++)
    returnValue += (float)returnValue * (float)rate;
  std::cout<<"Float one is Invoked\n";
}

int main()
{
  BankIntrest b1(1000,4,5) , b2(1000,(float)0.04,5);
  b1.displayReturn();
  b2.displayReturn();
}
