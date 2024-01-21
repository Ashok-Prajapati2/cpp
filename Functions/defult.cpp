#include <iostream>
#include <string>
using namespace std;

// india is defult perameter
void myFunction(std::string country = "INDIA")
{
    cout << country << "\n";
}

int main()
{
    myFunction();
    myFunction("USA");
    return 0;
}
