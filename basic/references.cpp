#include <iostream>
#include <string>
using namespace std;

int main()
{

    string food = "Pizza"; // food
    string &meal = food;   // reference to food

    cout << food << "\n";
    cout << meal << "\n";

    // memory
    cout << &food << "\n";
    cout << &meal << "\n";
    return 0;
}