#include<iostream>
using namespace std;
class Time{
    int hr;
    int min;
    int sec;
    public:
    Time():Time(10,10,10){

    }
    Time(int hr,int min,int sec){
        this->hr=hr;
        this->min=min;
        this->sec=sec;
    }
    int getHour(){
        return hr;
    }
    int getMinute(){
    return min;
    }
    int getSeconds(){
    return sec;
    }
    void printTime(){
        cout<<"HH:MM:SS = "<<hr<<": "<<min<<": "<<sec<<endl;
    }
    void setHour(int hr){
        this->hr=hr;
    }
    void setMinute(int min){
        this->min=min;
    }
    void setSeconds(int sec){
        this->sec=sec;
    }
};
int main(){
    int hr;
    int min;
    int sec;
    
   Time *ptr= new Time(10,10,10);
    cout<<"Hour: "<< ptr->getHour()<<endl;
    cout<<"Minute: "<<ptr->getMinute()<<endl;
    cout<<"Seconds: "<<ptr->getSeconds()<<endl;
    ptr->printTime();
    cout<<"enter value in Hours"<<endl;
    cin>>hr;
    ptr->setHour(hr);
    cout<<"enter value in Minutes"<<endl;
    cin>>min;
    ptr->setMinute(min);
    cout<<"enter value in Seconds"<<endl;
    cin>>sec;
    ptr->setSeconds(sec);
    ptr->printTime();
    return 0;
}

