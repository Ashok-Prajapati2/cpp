#include<iostream>
using namespace std;
int main(){
    
    char m;
    
    cout << "enter any key  for check value: ";
    cin >> m;

    if(m >= 65 && m <= 90){
        cout << "Upper case" << endl;
    }
    else if(m >= 97 && m <= 122){
        cout << "Lower case" << endl;
    }
    else if(m >= 48 && m <= 58){
        cout << "Number" << endl;
    }
    else{
        cout << "Other Symbol" << endl;
    }
    return 0;

}
        
