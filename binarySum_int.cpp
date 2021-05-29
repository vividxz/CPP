#include<iostream>
#include<cmath>
using namespace std;
long long int length(long long int num)
{
  long long int length = 0;
  while(num>0)
  {
    length++;
    num/=10;
  }
  return length;
}
long long int reverse(long long int num)
{
  long long int reverse = 0;
  while(num>0)
  {
    reverse = (reverse*10) + (num%10);
    num/=10;
  }
  return reverse;
}
long long int binarySum(long long int binary1 ,long long int binary2)
{
  long long int sum = 0, prevCarry = 0, zeroCount = 0, lastDig1, lastDig2;
  long long int binaryL = length(binary1)>length(binary2)?binary1:binary2;
  // binaryL *=10;
  while(binaryL>0)
  {
    lastDig1 = binary1%2;
    lastDig2 = binary2%2;
    if((lastDig1+lastDig2)>1)
    {
      sum = sum*10 + prevCarry;
      prevCarry = 1;
    }
    else
    {
      if(lastDig1+lastDig2+prevCarry > 1)
      {
        sum = sum*10 ;
        prevCarry = 1;
      }
      else
      {
        sum = sum*10 + (lastDig1+lastDig2+prevCarry);
        prevCarry = 0;
      }
    }
    if(sum==0);
      zeroCount++;
    binaryL/=10;
    binary1/=10;
    binary2/=10;
  }
  sum = sum*10 + prevCarry;
  sum = reverse(sum) * pow(10,zeroCount) ;
  return sum;
}
int main()
{
  long long int binary1,binary2;
  cin>>binary1>>binary2;
  cout<<binarySum(binary1,binary2);
}
