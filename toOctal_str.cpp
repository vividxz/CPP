//Append and rerverse
#include<iostream>
#include<algorithm>
using namespace std;
string toOctal(int decimal)
{
  string octal="";
  int lastOctal;
  while(decimal>0)
  {
    lastOctal = decimal % 8;
    octal = octal+(to_string(lastOctal));
    decimal/=8;
  }
  reverse(octal.begin(),octal.end());
  return octal;
}
// string toOctal(int decimal)
// {
//   string octal="";
//   int lastOctal;
//   while(decimal>0)
//   {
//     lastOctal = decimal % 8;
//     octal.append(to_string(lastOctal));
//     decimal/=8;
//   }
//   reverse(octal.begin(),octal.end());
//   return octal;
// }
int main()
 {
  int decimal;
  cin>>decimal;
  cout<<toOctal(decimal);
  return 0;
}
