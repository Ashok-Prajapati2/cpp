#include <iostream>
#include <string>
using namespace std;

int main()
{

    bool isCoding = true;
    bool isFun = false;
    cout << "True " << isCoding << endl;
    cout << "Flase " << isFun << endl;

    cout << (5 > 2) << endl;

    int yourage;
    cin >> yourage;
    int votingAge = 18;

    if (yourage >= votingAge)
    {
        cout << "Old enough to vote!" << endl;
    }
    else
    {
        cout << "Not old enough to vote." << endl;
    }

    return 0;
}