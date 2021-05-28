// ARRAY Method  // Doubt at return
#include<iostream>
using namespace std;
int bin_dig(int num)
{
  int bin_dig=0;
  for(int i=num;i>0;i/=2)
  {
    bin_dig++;
  }
  return bin_dig;
}
int* decimal_binary(int decimal)
{
  int digit=bin_dig(decimal),bin_arr[digit];
  for(int i=decimal;i>0;i/=2)
  {
    bin_arr[digit-1]=i%2;
    digit--;
  }
  int* bin_arr_ptr = bin_arr;
  return bin_arr;
}
int main()
{
  int decimal;
  cin>>decimal;
   for(int k=0;k<bin_dig(decimal);k++)
  // {
  cout<<*(decimal_binary(decimal)+k);
  // }
return 0;
}
