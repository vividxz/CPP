#include <iostream>
using namespace std;

class employee{
  int id;
  float salary;
public:
  employee(int empId){
    id = empId;
    salary = 12000.0;
  }
  int getId(){
    return id;
  }
  int getSalary(){
    return salary;
  }

  employee(){
    cin>>id;
    salary = 12000.0;
  }
};

class programmer :public employee{
  string language;
public:
  void setLanguage(string lang){
    language = lang;
  }
  string getLanguage(void){
    return language;
  }
};

int main()
{
  employee sahil(101), soumil(102);
  programmer aditya;
  aditya.setLanguage("Java");
  cout<<aditya.getId()<<endl;
  cout<<aditya.getSalary()<<endl;
  cout<<aditya.getLanguage()<<endl;
}
