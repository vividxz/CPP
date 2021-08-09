#include <iostream>
using namespace std;
class employee{
  int id;
  int salary;
public:
  void setemp(void);
  void displayemp(void);
};

void employee::setemp(void)
{
  cout<<"Enter id and salary \n";
  cin>>id>>salary;
}

void employee::displayemp(void)
{
  cout<<"Id of employee is - "<<id<<" , salary - "<<salary<<endl;
}

int main()
{
  employee emp[5];
  for(int i = 0 ; i < 5 ; i++)
  {
    emp[i].setemp();
    emp[i].displayemp();
  }
}
