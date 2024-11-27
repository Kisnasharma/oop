// round off
#include<iostream>
using namespace std;
float setFloat(){
    float a;
    cout<<"Enter float val : ";
    cin>>a;
    return a;
}
int roundToInteger(float f){
    f *= 10;
    int ans = (int)f;
    if((ans%10)>5) return (ans/10)+ 1;
    return (ans/10);
}

int roundToTenths(float f){
    int ans = roundToInteger(f);
    if(ans%10 > 5) return ((ans/10)+1) * 10;
    return (ans/10) * 10;
}

int roundToHundredths(float f){
    int ans = roundToTenths(f);
    if(ans%100 > 50) return ((ans/100) + 1) * 100;
    return ((ans/100)*100);
}

int roundToThousandths(float f){
    int ans = roundToHundredths(f);
    if(ans%1000 > 500) return ((ans/1000) + 1) * 1000;
    return ((ans/1000)*1000);
}

int main(){
    
    float* ptr = new float(setFloat());
    // * ptr is val y7
    cout<<"roundToInteger : "<<roundToInteger(*ptr)<<endl;
    cout<<"roundToTenths : "<<roundToTenths(*ptr)<<endl;
    cout<<"roundToHundredths : "<<roundToHundredths(*ptr)<<endl;
    cout<<"roundToThousandths : "<<roundToThousandths(*ptr);

    delete ptr;
    return 0;
}
