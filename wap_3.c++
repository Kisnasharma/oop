// Write a program that reads in a five-digit integer and determines whether it is a palindrome
#include<iostream>
using namespace std;
bool isPalindrome(int n){
    int rev = 0;
    int temp = n;
    while(temp){
        rev*=10;
        rev += (temp%10);
        temp /=10;
    } 
    if(n == rev) return true;
    else return false;
}
int main(){
    int n;
    cout<<"Enter num : ";
    cin>>n;

    int count_digit = 0;
    int temp = n;
    while(temp){
        count_digit++;
        temp /=10;
    }

    if(count_digit != 5) {
        cout<<"Inavalid size";
    }
    else{
        bool flag = isPalindrome(n);
        if(flag == 1) cout<<n<<" is palindrome"<<endl;
        else cout<<n<<" is not palindrome"<<endl;
    }
    return 0;
}