// array of object
#include<iostream>
#include<string>
using namespace std;

class Student {
private:
    string name;
    int p;
    int c;
    int m;

public:
    // defalut for declaring array
    Student(){
        name = "";
        p = 0;
        c = 0;
        m = 0;
    }
    // para . constructor ~ setter
    Student(int p, int c, int m, string name){
        this->name = name;
        this->p = p;
        this->c = c;
        this->m = m;
    }

    string getName(){
        return name;
    }
    int pMarks(){
        return p;
    }
    int cMarks(){
        return c;
    }
    int mMarks(){
        return m;
    }  

};

int setP(){
    int p;
    cout<<"Enter Physics marks : ";
    cin>>p;
    return p;
}

int setC(){
    int c;
    cout<<"Enter chemistry marks : ";
    cin>>c;
    return c;
}

int setM(){
    int m;
    cout<<"Enter maths marks : ";
    cin>>m;
    return m;
}

string setName(){
    string s;
    cout<<"Enter name : ";
    cin.ignore(); // Clear the input buffer
    getline(cin,s);
    return s;
}

int main(){
    int n;
    cout<<"Size of arr : "; 
    cin>>n;

    // arr of objects 
    Student *arr = new Student[n];

    for(int i=0;i<n;i++){
        Student *s = new Student(setP(),setC(),setM(),setName());
        arr[i] = *s;
        delete(s);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i].pMarks()<<" "<<arr[i].cMarks()<<" "<<arr[i].mMarks()<<" "<<arr[i].getName();
        cout<<endl;
    }
    delete(arr);
    
    return 0;

}