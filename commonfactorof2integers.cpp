#include <bits/stdc++.h>
using namespace std;

int main(){
    cout<<"COMMON FACTOR CALCULATING ENGINE || BY ARINDAM SAMANTA\n";
    cout<<"This engine can find common factors of 2 integers..\n";
    int a, b, c, i;
    cout<<"Enter The First Value:\n";
    cin>>a;
    cout<<"Enter The Second Value:\n";
    cin>>b;
    cout<<"The common factor(s) of "<<a<<" & "<<b<<" is/are:\n";
    for(i = 1;i<a;i++){
        if(a%i == 0 && b%i ==0){
            c = i;
            cout<<c<<endl;
        }
    }

    return 0;
}