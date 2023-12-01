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
        cout << char(a+n-1) << " ";
        j++;
    }
    cout <<""<< endl;
    i++;
    a--;
}

return 0;
}

