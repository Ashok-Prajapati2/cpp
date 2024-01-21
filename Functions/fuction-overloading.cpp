#include <iostream>
#include <string>
using namespace std;

int FuncInt(int x, int y)
{
    return x + y;
}

double FuncDouble(double x, double y)
{
    return x + y;
}

int plusFunc(int x, int y)
{
    return x + y;
}

double plusFunc(double x, double y)
{
    return x + y;
}
int main()
{
    int myNum1 = FuncInt(8, 5);
    double myNum2 = FuncDouble(4.3, 6.26);
    cout << "Int: " << myNum1 << "\n";
    cout << "Double: " << myNum2 << "\n";

    int num1 = plusFunc(8, 5);
    double num2 = plusFunc(4.3, 6.26);
    cout << "Int: " << num1 << "\n";
    cout << "Double: " << num2 << "\n";
    return 0;
}
