#include<iostream>
using namespace std;
int toOctal(int decimal)
{
  int x = 1 , lastDigit , octal = 0;
  while(decimal>x)
    x *= 8;
  x /=8;
  while(x>0)
  {
    lastDigit = decimal/x;
    decimal -= lastDigit*x;
    octal = octal *10 + lastDigit;
    x /=8;
  }
  return octal;
}
int main()
{
  int decimal;
  cin>>decimal;
  cout<<toOctal(decimal);
}
