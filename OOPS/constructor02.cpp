#include <bits/stdc++.h>

class coordinates{
  int x,y;
public:
  coordinates(int a , int b){
    x = a;
    y = b;
  }
  void displaycoord(void){
    std::cout<<"("<<x<<","<<y<<")\n";
  }
  friend void distance(coordinates , coordinates);
};

void distance(coordinates c1, coordinates c2){
  float distance = sqrt(pow((c1.x - c2.x),2)+pow((c1.y - c2.y),2));
  std::cout<<distance<<" sq. units \n";
}

int main()
{
  coordinates c1(2,4) , c2(12,9);
  c1.displaycoord();
  c2.displaycoord();

  distance(c1,c2);
}
