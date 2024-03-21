#include<iostream>
using namespace std;
class Date
{
    int day;
    int month;
    int year;
    int year1;
public:
void initDate(int day=1,int month=1,int year=2024)
{
 this->day=day;
 this->month=month;
 this->year=year;
}

void printDateOnConsole()
{
cout<<day<<"/"<<month<<"/"<<year<<endl;
}

void acceptDateFromConsole()
{
    cout<<"enter a date in DD/MM/YYYY"<<endl;
    cout<<"enter day"<<endl;
    cin>>day;
    cout<<"enter month"<<endl;
    cin>>month;
    cout<<"enter year"<<endl;
    cin>>year;
cout<<day<<"/"<<month<<"/"<<year<<endl;
}

bool isLeapYear()
{

 if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) { 

        return true;

    } else { 

       return false;

    } 
}

};



int main()
{
 Date d;
 d.initDate();
 int choois;
 do{

    cout<<" enter your choois"<<endl; 
   cout<<"0: Exit"<<endl;
   cout<<"1: init Date"<<endl;
   cout<<"2: print Date on cansole"<<endl;
   cout<<"3: accept Date fron console"<<endl;
   cout<<"4: check year is leap year or not"<<endl;
cin>>choois;

    switch(choois){
 case 0:
 cout<<"Thank you for using this app"<<endl;
 choois=0;
 break;
 case 1:
 d.initDate();
 break;
 case 2:
 d.printDateOnConsole();
 break;
 case 3:
 d.acceptDateFromConsole();
 break;
 case 4:
if(d.isLeapYear()){
    cout<<"this is leap year"<<endl;
}
else{
    cout<<"not leap year"<<endl;
}
break;
default:
cout<<"invalied choois"<<endl;
}
 }while (choois!=0);
}


