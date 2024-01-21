#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 2d Array
    string letter[2][4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}};
    cout << letter[0][2] << "\n";

    // 3d Array
    string letters[2][2][2] = {
        {{"A", "B"},
         {"C", "D"}},
        {{"E", "F"},
         {"G", "H"}}};
    cout << letters[0][2][2] << "\n";

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << letter[i][j] << "\n";
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                cout << letters[i][j][k] << "\n";
            }
        }
    }

        return 0;
}