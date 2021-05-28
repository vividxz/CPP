#include <bits/stdc++.h>
using namespace std;

int hexToDecimal(string hex)
{
int x=1,dec=0;
  for(int i=hex.size()-1; i>=0;i--)
  {
    if(hex[i]>='0' && hex[i]<='9')
      dec+=x*(hex[i]-'0');
    else if( hex[i]>='A' && hex[i]<='F')
      dec+=x*(hex[i]-'A'+ 10);
    x*=16;
  }
  return dec;
    }
int octalToDecimal(long long int num2)
{
  int x=1,dec=0;
  while(num2>0)
  {
    dec+=(num2%10)*x;
    x=x*8;
    num2/=10;
  }
  return dec;
}
int binaryToDecimal(long long int num1)
{
  int k=0,dec=0;
  for (long long int i=num1;i>0;i/=10)
  {
  dec+=(i%10)*pow(2,k);
  k++;
  }
  return dec;
}
int main()
{
  cout<<"Enter a binary number "<<endl<<endl;
  long long int num1,num2;
  cin>>num1; cout<<endl;
  cout<<"Decimal number is "<<binaryToDecimal(num1)<<endl<<endl;
  cout<<"Enter an octal number "<<endl<<endl;
  cin>>num2; cout<<endl;
  cout<<"Decimal number is "<<octalToDecimal(num2)<<endl<<endl;
 string hex;
 cout<<"Enter a hexadecimal number"<<endl<<endl;
 cin>>hex;cout<<endl;
 cout<<"Decimal number is "<<hexToDecimal(hex)<<endl<<endl;
 return 0;
}
