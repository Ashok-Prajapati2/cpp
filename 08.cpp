// overrriding member function

#include<iostream>
using namespace std;

class base
{
 public:
 void msg(){
     cout<<"base class"<<endl;
 }
};

class derived : public base{
    public:
    void msg(){
        cout<<"derived class"<<endl;
        base::msg();
    }
};

int main(){
    base b;
    b.msg();
    cout<< "----------"<< endl;
    derived a;
    a.msg();

    return 0;
}

