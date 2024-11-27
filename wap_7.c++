/*
Write a program to solve the Towers of Hanoi problem. Use a recursive function with four parameters:
a. The number of disks to be moved
b. The peg on which these disks are initially threaded
c. The peg to which this stack of disks is to be moved
d. The peg to be used as a temporary holding area
*/
#include<iostream>
using namespace std;
void towerOfHanoi(int level, char &source, char &helper, char &destination){
    if(level <=0) return;
    towerOfHanoi(level-1,source,destination,helper);
    cout<<source<<"->"<<destination<<endl;
    towerOfHanoi(level-1,helper,source,destination);
    return;

}
int main(){
    int level;
    cout<<"Enter level : ";
    cin>>level;
    char ch1,ch2,ch3;
    ch1 = 'S';
    ch2 = 'H';
    ch3 = 'D';

    towerOfHanoi(level,ch1,ch2,ch3);
    return 0;
}