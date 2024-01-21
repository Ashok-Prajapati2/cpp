// operator overriding

#include <iostream>
#include <string>
using namespace std;

class A
{
private:
int weight;
public:

    A(int x=0){
        weight = x;
    }

    A operator+(A w){
        A temp;
        temp.weight = weight + w.weight;
        return temp;
    }

    void to_print();

};

void A::to_print(){
 cout << "weight: " << weight << endl;
}
int main()
{
    int a = 31, b = 29, c = 0;
    c = a + b;
    cout << "Total:  " << c << endl;
    A p1(39);
    A p2(51);
    A total;

    total = p1 + p2;
    total.to_print();

    return 0;
}
