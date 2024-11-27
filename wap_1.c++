// Write a program that reads in two integers and determines and prints if the first is a multiple of the second.

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two number : ";
    cin>>a>>b;

    if(a<b) swap(a,b); // b is greater 

    if(a%b == 0 && b!=0) cout<<"Yes "<<a<<" is multiple of "<<b<<endl;
    else cout<<"No "<<a<<" is not multiple of "<<b<<endl;

    return 0; 

}