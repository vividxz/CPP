#include <bits/stdc++.h>
using namespace std;
// Use of this function is to count
int zero(int n)
{
  int c=0;
  while(n%2==0)

  {
    c++;
    n/=2;
  }
  return c;
}
int reverse(int n)
{
  int rev=0;
  while(n>0)
  {
    rev=(n%10)+(rev*10);
    n/=10;
  }
  return rev;
}

int decimalToBinary(int n)
{
  int bin=0;
  while(n/=2)
  {

    bin=(n%2)+(bin*10);

  }
  return reverse(bin);
}
int main()
{

  cout<<"Enter a decimal number "<<endl<<endl;
  int n;
  cin>>n; cout<<endl<<endl;

  cout<<"Binary number is ="<<decimalToBinary(n)*(pow(10,zero(n)))<<endl;



}
