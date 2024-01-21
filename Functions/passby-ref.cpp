#include <iostream>
#include <string>
using namespace std;

int swap(int &a, int &b)
{
    int z;
    z = a;
    a = b;
    b = z;
    return a,b;
}

int main()
{
    int a = 12, b = 58;
    cout << a << " " << b << "\n";
    swap(a, b);

    cout << a << " " << b << "\n";
    return 0;
}