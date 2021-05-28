#include<bits/stdc++.h>
using namespace std;
string decimal_binary(int decimal)
{
  int last_pow=1,count=0,bin_value=0;
  string binary="";
  while(last_pow<=decimal)
  {
    last_pow*=2;
    count++;
  }
  count--; // it will increase 0ne extra so we need to decrease it by one
  for(int i=count;i>=0;i--)
  {
    bin_value +=pow(2,i);
    if(bin_value<=decimal)
      binary.append("1");
    else
    {
      binary.append("0");
      bin_value-=pow(2,i);
     }

  }
return binary;
}
int main()
{
  int decimal;
  cin>>decimal;
  cout<<decimal_binary(decimal);

}
