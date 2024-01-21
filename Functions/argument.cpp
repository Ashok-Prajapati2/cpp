#include <iostream>
#include <string>
using namespace std;

void myFunction(string n,string p);

int main()
{

    myFunction("ashok", "ramesh");
    return 0;
}

void myFunction(string n,string p)
{
    cout << n << " " << p << endl;
}