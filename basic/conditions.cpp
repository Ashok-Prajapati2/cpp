
// if - to specify a block of code to be executed, if a specified condition is true
// else - to specify a block of code to be executed, if the same condition is false
// else if - to specify a new condition to test, if the first condition is false
// switch - to specify many alternative blocks of code to be executed

#include <iostream>
#include <string>
using namespace std;

int main()
{

    string time;
    cin >> time;

    if (time == "morning")
    {
        cout << "good morning" << endl;
    }

    else if (time == "evening")
    {
        cout << "good evening" << endl;
    }
    else if (time == "afternoon")
    {
        cout << "good afternoon" << endl;
    }
    else
    {
        cout << "Hello" << endl;
    }

    // variable = (condition) ? expressionTrue : expressionFalse;
    int a = (9 > 4) ? 1 : 0;

    cout << a << endl;

    //
    int day = 1;
    switch (day)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;

    default:
        cout << "input error";
    }
    cout << endl;
    return 0;
}