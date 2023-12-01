#include<iostream>
using namespace std;
int main(){

// pattern 01 

int n, i = 1; 
cout << "enter number: ";
cin >> n ;

while(i<=n){
    int j = 1;
    while(j<=n){
        cout << "*" << " ";
        j++;
    }
    cout <<""<< endl;
    i++;
}

return 0;
}