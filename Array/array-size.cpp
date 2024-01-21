#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Omit Array Size
    string cars1[] = {"Volvo", "BMW", "Ford"};  // Three array elements
    string cars[3] = {"Volvo", "BMW", "Ford"}; // Also three array elements

    //get size 
    cout << sizeof(cars)<< endl << sizeof(string) <<endl;

    return 0;
}