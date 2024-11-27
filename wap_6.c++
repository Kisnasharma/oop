// gcd of two num
#include<iostream>
using namespace std;
int gcd(int a, int b){
    int mn = min(a,b);
    int ans = 1;
    for(int i=1;i<=mn;i++){
        if(a%i == 0 && b%i == 0) ans = i;
    }

    return ans;
}
int main(){
    int a,b;
    cout<<"Enter two num : ";
    cin>>a>>b;

    cout<<gcd(a,b);
}