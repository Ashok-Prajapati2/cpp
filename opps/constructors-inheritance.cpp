//  Constructors and inheritance
#include<iostream>
using namespace std;

class test_base 
{
 public:

 test_base(){
    cout << "test_base(), defult constructor" << endl;
 }
 test_base(int a){
    cout << "test_base(),paramatric  constructor" << a << endl;
 }
};

class test_child : public test_base
{
public:
test_child()
    {
    cout << "test_child(),defult constructor" << endl;
    }
test_child(int b)
    {
    cout << "test_child(),paramatric  constructor : " << b << endl;
    }
};

int main(){
    test_child a;  
    cout << "<< " << endl;
    test_child a1(5);  
    return 0;
}