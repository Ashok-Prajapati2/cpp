
// Pointer Declaration
// Pointer Initialization
// Pointer Dereferencing

#include <iostream>
#include <string>
using namespace std;

int main()
{

    int food = 1;
    int *ptr = &food;
    cout << ptr << " " << &ptr << " " << food << endl;

    return 0;
}