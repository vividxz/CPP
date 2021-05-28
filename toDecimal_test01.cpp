#include <bits/stdc++.h>
using namespace std;
int hex_decimal(string hex)
{
  int decimal=0,hex_pow=1;
  for(int i=hex.size()-1;i>=0;i--)
  {
    if(hex[i]>='0' && hex[i]<='9')
      decimal +=(hex[i]-'0')*hex_pow;
    else if(hex[i]>='A' && hex[i]<='Z')
        decimal +=(hex[i]-'A'+10)*hex_pow;
    hex_pow*=16;
  }
  return decimal;
}
int octal_decimal(string octal)
{
  int decimal=0,eight_pow=1;
  for(int i=octal.length()-1;i>=0;i--)
  {
    decimal +=(octal[i]-'0')*eight_pow;
    eight_pow*=8;
  }
  return decimal;
}
int binary_decimal(string binary)
{
  int two_pow=1,decimal=0;
  for(int i=binary.size()-1;i>=0;i--)
  {
    decimal +=(binary[i]-'0')*two_pow;
    two_pow *=2;
  }
  return decimal;
}

int main()
{
  cout<<"Enter a binary number\n";
  string binary,octal,hex;
  cin>>binary;
  cout<<binary_decimal(binary)<<endl;
  cout<<"Enter an octal number\n";
  cin>>octal;
  cout<<octal_decimal(octal)<<endl;
  cout<<"Enter a hexadecimal number\n";
  cin>>hex;
  cout<<hex_decimal(hex);
  return 0;
}
