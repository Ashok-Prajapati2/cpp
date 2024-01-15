// inhetitance

#include<iostream>
using namespace std;

class rectangle
{
public:
    int width;
    int breadth;

    void area(){
        cout << "area: " << width*breadth << endl;
        
    }
};

class cuboid:public rectangle
{
  public:
  int height;

  void volume(){
    cout<< "volume: " << height*width*breadth << endl;
  }
};


int main(){

    cout << "rectangle is >> " << endl;
    rectangle a;
    a.width =10;
    a.breadth = 5;
    a.area();

    cout<< endl << "cube is >> " << endl;
    cuboid b;
    b.breadth = 5;
    b.width =10;
    b.height = 10;
    b.area();
    b.volume();

    return 0;
}