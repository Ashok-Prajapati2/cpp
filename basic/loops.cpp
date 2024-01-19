#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i = 0;
    while (i < 5)
    {
        cout << i << "\n";
        i++;
    }
    // -----------------------------
    int a = 1;
    do
    {
        cout << a << "\n";
        a++;
    } while (a < 5);
    // -------------------------------
    for (int i = 0; i < 5; i++)
    {
        cout << i << "\n";
    }
    // -------------------------------

    for (int i = 0; i < 10; i++)
    {
        if (i == 4)
        {
            continue;
        }
        cout << i << "\n";
    }
    // -------------------------------
    for (int i = 0; i < 10; i++)
    {
        if (i == 4)
        {
            break;
        }
        cout << i << "\n";
    }
    // --------------------------------
    return 0;
}