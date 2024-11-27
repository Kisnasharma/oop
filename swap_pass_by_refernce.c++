#include<iostream>
using namespace std;

void swap(int *a , int *b){ // pass by refernce
    int temp = *a;
    *a = *b;
    *b = temp;

    return;
}
int main(){
    int x,y;
    cin>>x>>y;

    int *px = &x;
    int *py = &y;

    swap(px,py); // the value which is stored in px and py are address of x and y , that as pass 

    cout<<x<<" "<<y;
    return 0;
}