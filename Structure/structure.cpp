// Structures (structs) are a way to group several related variables into one place.
//  Each variable in the structure is known as a member of the structure.
//  struct {             // Structure declaration
//    int myNum;         // Member (int variable)
//    string myString;   // Member (string variable)
//  } myStructure;       // Structure variable

#include <iostream>
#include <string>
using namespace std;

int main()
{
    struct
    {                    // Structure declaration
        int myNum;       // Member (int variable)
        string myString; // Member (string variable)
    } myStructure;       // Structure variable

    // Access Structure Members
    myStructure.myNum = 1;
    myStructure.myString = "Hello World!";

    cout << myStructure.myNum << "\n";
    cout << myStructure.myString << "\n";



    return 0;
}