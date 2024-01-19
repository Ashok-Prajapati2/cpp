#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main()
{
    string name = "Ashok";
    string last = "kumar";

    string fullname = name + " \t " + last;
    cout << fullname << endl;

    // append
    string fullname1 = name.append(last);
    cout << fullname1 << endl;

    // number vs string
    int x = 10;
    int y = 20;
    int z = x + y; // z will be 30 (an integer)
    cout << z << endl;

    string a = "10";
    string b = "20";
    string c = a + b; // z will be 1020 (a string)
    cout << c << endl;

    // string length

    cout << fullname << "\n The length of name is : "
         << fullname.length() << endl
         << "size of last : " << last.size() << endl;

    // access string
    cout << "\n"
         << fullname[0] << endl;

    // Change String Characters
    fullname[12] = 'R';
    cout << fullname << endl;

    // user input

    string username, fname;

    cout << "Enter username: ";
    cin >> username;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore the newline character

    cout << "Name of user is: " << username << "\n";

    cout << "Enter full name: ";
    getline(cin, fname);
    cout << "Full name is: " << fname << endl;
    return 0;
}