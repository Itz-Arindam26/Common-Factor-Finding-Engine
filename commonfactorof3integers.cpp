#include <bits/stdc++.h>
using namespace std;

int main(){
    cout<<"COMMON FACTOR CALCULATING ENGINE || BY ARINDAM SAMANTA\n";
    cout<<"This engine can find common factors of 3 integers...\n";
    int a, b, c, d, i;
    cout<<"Enter The First Value:\n";
    cin>>a;
    cout<<"Enter The Second Value:\n";
    cin>>b;
    cout<<"Enter The Third Value:\n";
    cin>>c;
    cout<<"The common factor(s) of "<<a<<","<<b<<" & "<<c<<" is/are:\n";
    for(i=1;i<a;i++){
        if(a%i == 0 && b%i == 0 && c%i == 0){
            d = i;
            cout<<d<<endl;
        }
    }

    return 0;
}