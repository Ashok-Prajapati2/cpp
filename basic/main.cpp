#include<iostream>
using namespace std;
int addnum(int a , int b);

int main(){
    std::cout << "Hello, World!" << std::endl;
    std::cout << addnum(5,2) << std::endl;
    int fn = 10;
    int sn = 20;
    int sum = fn+sn;
    std::cout << sum << std::endl;

    //    ASCII 
    int i = 97;
    cout << char(i) << endl;

    return 0;
}
int  addnum(int a, int b){
 return a+b;
}

