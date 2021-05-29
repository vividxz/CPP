#include<iostream>
#include<algorithm>
using namespace std;
string binarySum(string binary1 ,string binary2)
{
  int bitsum ,carry = 0;
  string sum = "";
  string binaryL = binary1.size()>binary2.size()?binary1:binary2;
  string binaryS = binary1.size()>binary2.size()?binary2:binary1;
  reverse(binaryS.begin(),binaryS.end());
  int range = binaryL.size()-binaryS.size();
    for(int i= 1; i<=range;i++)
    binaryS.push_back('0');

  reverse(binaryS.begin(),binaryS.end());

  for(int i= binaryL.size()-1;i>=0;i--)
  {
    bitsum = (binaryL[i]-'0') + ( binaryS[i]-'0');
    if(bitsum>1)
    {
      bitsum = 0;
      sum = sum + to_string(carry);
      carry = 1;
    }
    else
    {
      if (bitsum+carry>1)
      {
        sum = sum + to_string(0);
        carry = 1;
      }
      else
      {
        sum = sum + to_string(bitsum+carry);
        carry = 0;
      }
    }
  }
  sum = sum + to_string(carry);
  reverse(sum.begin(),sum.end());
  return sum;
}
int main()
{
  string binary1 , binary2;
  cin>>binary1>>binary2;
  cout<<binarySum(binary1,binary2);
}
