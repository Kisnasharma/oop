// wap to find e^x using taylor series
#include<iostream>
#include<cmath>
using namespace std;

long long int factorial(int n){
    long long int f = 1;
    for(int i=1;i<=n;i++){
        f *= i;
    }
    return f;
}

double e(double x, int terms){
    double ans = 1.0;
    double curr = 1;
    for(int i=1;i<terms;i++){ // loop will run terms - 1 times
        curr *= (x/i); // x is double
        ans += curr; // first term is ->(x^1)/ 1!
    }

    return ans;
}
int main(){
    double x;
    cout<<"e^";
    cin>>x;
    int terms;
    cout<<"Enter number of terms : ";
    cin>>terms;

    // for taylor series 
    double codex = e(x,terms);
    double inbuiltx = exp(x);

    double tolerence = (abs(inbuiltx-codex)/inbuiltx) * 100;

    cout<<"Orignal val of e^"<<x<<" is "<<inbuiltx<<" and our value of e^"<<x<<" is "<<codex<<" ,hence % tolerence is "<<tolerence<<" %"<<endl;
    return 0;

}