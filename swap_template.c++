#include<iostream>
#include<string>
using namespace std;
template<class t1, class t2, class t3>
void swap(t1& a, t2& b){
    t3 temp = a;
    a = b;
    b = temp;
}

int main(){
    int a,b;
    cout<<"a : ";
    cin>>a;

    cout<<"b : ";
    cin>>b;

    swap(a,b);
    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;
}