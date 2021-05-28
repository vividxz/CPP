//STRING Method
#include<iostream>
#include<string>
// Reverse header file
#include<algorithm>
using namespace std;
string decimal_binary(int decimal)
{
  string binary="";
  for(int i=decimal;i>0;i/=2)
  {
    binary.append(to_string(i%2));
  }
  // we can also use bucket swap algo to reverse
  reverse(binary.begin(),binary.end());
  return binary;
}
int main()
{
  int decimal;
  cin>>decimal;
  cout<<decimal_binary(decimal);
}
