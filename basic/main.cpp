#include<iostream>
using namespace std;
int addnum(int a , int b);

int main(){

    std::cout << "Hello, World! \n" ;
    std::cout << addnum(5,2) << std::endl;
    int fn = 10;
    int sn = 20;
    int sum = fn+sn;
    std::cout << sum << std::endl;

    //    ASCII 
    int i = 97;
    cout << char(i) << endl;

    const int myNum = 15;  // myNum will always be 15
    // myNum = 10;  // error: assignment of read-only variable 'myNum' 
    
    const int minutesPerHour = 60;
    const float PI = 3.14; 

    return 0;
}
int  addnum(int a, int b){
 return a+b;
}

