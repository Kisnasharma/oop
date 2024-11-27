//  two time difference and sum
#include<iostream>
#include<ctime>

using namespace std;
class Time{
private:
    int hr;
    int min;
    int sec;
public:
    Time(int sec, int min, int hr){
        this->hr = hr;
        this->min = min;
        this->sec = sec;
    }
    
    int getHr(){
        return hr;
    }

    int getMin(){
        return min;
    }

    int getSec(){
        return sec;
    }

};

int setHr(){
    int hr;
    cin>>hr;
    if(hr>23 || hr<0){
        cout<<"Invalid input of hour";
        return -1;
    }
    return hr;
}

int setMin(){
    int min;
    cin>>min;
    if(min>59 || min<0){
        cout<<"Invalid input of minute";
        return -1;
    }
    return min;
}

int setSec(){
    int sec;
    cin>>sec;
    if(sec>59 || sec<0){
        cout<<"Invalid input of second";
        return -1;
    }
    return sec;
}

void sumTime(Time &t1, Time &t2){
    int hr = 0, min = 0, sec = 0;
    sec = t1.getSec() + t2.getSec();
    min += (sec/60);
    sec %= 60;
   
    min += t1.getMin() + t2.getMin();
    hr += (min/60);
    min %= 60;

    hr += t1.getHr() + t2.getHr(); 
    if(hr>24) {
        int day = hr/24;
        hr = hr%24;
        cout<<day<<":"<<hr<<":"<<min<<":"<<sec<<endl;

    }
    else cout<<hr<<":"<<min<<":"<<sec<<endl;

}
int main(){

    // taking of input from right to left

    // Time t1(setSec(),setMin(),setHr());
    cout<<"Enter time_1 : ";
    Time t2(setSec(),setMin(),setHr());

    string str = __TIME__;
    int h = stoi(str.substr(0,2));
    int m = stoi(str.substr(3,2));
    int s = stoi(str.substr(6,2));

    Time t3(s,m,h);
    cout<<"Enter time_2 : ";
    cout<<h<<" "<<m<<" "<<s<<endl;

    sumTime(t2,t3);
      
}