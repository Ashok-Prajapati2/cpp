#include<iostream>
using namespace std;
int main(){
int a =  97;
int n,i = 1; 

cout << "enter Number: ";
cin >> n ;

while(i<=n){
    int j = 1;
    while(j<=i){
        cout << char(a+n-j) << " ";
        j++;
    }
    cout <<""<< endl;
    i++;
}

return 0;
}