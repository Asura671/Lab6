#include<iostream>
using namespace std;
int n,nE = 0,nO = 0;
int main(){
    do{
        cout << "Enter an integer: ";
        cin >> n;
        if(n%2 == 0 && n!= 0 ) nE++;
        else if(n != 0 ) nO++;
    }while(n!=0);
    cout << "#Even numbers = " << nE << "\n";
    cout << "#Odd numbers = " << nO;
    return 0;
}

int main(){
    cout << "Enter an integer: ";
    cout << "#Even numbers = ";
    cout << "#Odd numbers = ";
    return 0;
}
