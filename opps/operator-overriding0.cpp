#include <iostream>
#include <string>
using namespace std;

class A
{
private:
    int weight;

public:
    A(int w = 0)
    {
        weight = w;
    }

    void operator++()
    {
        ++weight;

    }
    void operator++(int)
    {
        weight++;
    }
    void print()
    {
        cout << "weight: " << weight << endl;
    }
};

int main()
{   
    int weight;
    cout << "enter weight: ";
    cin >> weight;

    A ashok(weight);
    ++ashok;
    ashok++;

    ashok.print();

    return 0;
}