#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << endl;

    string cars[4];
    string buss[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    int myNum[3] = {10, 20, 30};
    cout << buss[2] << endl;

    // Change an Array Element
    buss[2] = "mrt";
    cout << buss[2] << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << buss[i] << "\n";
    }


    int myNumbers[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++)
    {
        cout << myNumbers[i] << "\n";
    }

    return 0;
}