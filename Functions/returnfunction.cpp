#include <iostream>
#include <string>
using namespace std;

int myFunction(int x, int y)
{
    return x + y;
}

int main()
{
    int z = myFunction(5, 3);
    cout << z << endl;
    return 0;
}