// ofstream 	Creates and writes to files
// ifstream 	Reads from files
// fstream 	    A combination of ofstream and ifstream: creates, reads, and writes to file

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ofstream MyFile("test.txt");

    MyFile << "this is test file";

    MyFile.close();

    string fileread;

    ifstream MyReadFile("test.txt");

    getline(MyReadFile, fileread);
    cout << fileread << endl;

    // we can loop use for more line

    MyReadFile.close();
    return 0;
}