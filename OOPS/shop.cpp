#include <iostream>
using namespace std;
class shop{
  int itemId[10];
  int itemPrice[10];
  int counter = 0;
public:
  void initCounter(void){ counter = 0;};
  void setItem(void);
  void displayItem(void);
};

void shop :: setItem(void)
{
  cout<<"Enter id and price of item "<<counter+1<<endl;
  cin>>itemId[counter];
  cin>>itemPrice[counter];
  counter++;
}

void shop :: displayItem(void)
{
  for(int i = 0 ; i < counter ; i++)
   cout<<"Price of item of id - "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
}

int main()
{
  shop dukan;
  dukan.initCounter();
  dukan.setItem();
  dukan.setItem();
  dukan.setItem();
  dukan.setItem();
  dukan.displayItem();
}
