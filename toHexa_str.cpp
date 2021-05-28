//Append and reverse
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
 string toHex(int decimal)
 {
   int lastHex;
   string hex = "";
   while(decimal>0)
   {
     lastHex = decimal%16;
     if(lastHex<10)
      hex.append(to_string(lastHex));
    else
    {
      char lastHexC ='A' + (lastHex-10);
      hex.append(1,lastHexC);

    }
    decimal/=16;
   }
   reverse(hex.begin(),hex.end());
   return hex;
 }
 int main()
 {
   int decimal;
   cin>>decimal;
   cout<<toHex(decimal);
 }
