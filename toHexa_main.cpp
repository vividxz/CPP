 #include<iostream>
 using namespace std;
 string toHex(int decimal)
 {
   int x = 1,lastDigit;
   string hex;
   while(decimal>x)
     x*=16;
   x/=16;
   while(x>0)
   {
     lastDigit = decimal/x;
     decimal -= lastDigit*x;
     x/=16;
     if(lastDigit<10)
       hex = hex + to_string(lastDigit);
     else
     {
       hex.push_back('A' + (lastDigit-10));
     }
   }
   return hex;
 }
 int main()
 {
   int decimal;
   cin>>decimal;
   cout<<toHex(decimal);
 }
