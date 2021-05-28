#include<iostream>
using namespace std;
int toBinary(int decimal)
{
  int x = 1 , binary =0;
  while(decimal>x)
    x *= 2;
  x/=2;
  while(x>0)
  {
    int lastDigit = decimal/x;
    decimal -= lastDigit*x;
    binary = binary*10 + lastDigit;
    x /= 2;
  }
  return binary;
}
int main()
{
  int decimal;
  cin>>decimal;
  cout<<toBinary(decimal);
}
