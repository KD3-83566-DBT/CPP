#include<iostream>
using namespace std;
class Date{
int day;
int month;
int year;
public:
Date(){
    day=1;
    month=1;
    year=2001;
}

void acceptDate()
    {
        cout << "Enter day - ";
        cin >> day;
        cout << "Enter month - ";
        cin >> month;
        cout << "Enter year - ";
        cin >> year;
    }
     void displayDate()
    {
        cout << day << "/" << month << "/" << year << endl;
    }
};

class Person{
string name;
string address;
Date dob;
public:
Person(){
  name="";
  address=" ";
 // dob.acceptDate();
}
void acceptPerson(){
    cout<<"enter name of person"<<endl;
    cin>>name;
    cout<<"enter address of the Person address"<<endl;
    cin>>address;
    cout<<"enter DOB of person"<<endl;
    dob.acceptDate();
}
void displayPerson(){
cout<<"Name: "<<name<<endl;
cout<<"Address:  "<<address<<endl;
dob.displayDate();

}
};
class Employee{
int empid;
double sal;
string dept;
Date joinDate;
 public:
 Employee()
    {
     empid=0;
     sal=0;
     dept="";      
    }
    void acceptEmployee(){
     cout<<"enter empid of empid"<<endl;
     cin>>empid;
     cout<<"enter salary of employee"<<endl;
     cin>>sal;
     cout<<"enter department of employee"<<endl;
     cin>>dept;
     cout<<"enter joning date"<<endl;
     joinDate.acceptDate();
    }
    void displayEmployee(){
cout<<"empid:  "<<empid<<endl;
cout<<"Salary:  "<<sal<<endl;
cout<<"Department: "<<dept<<endl;
joinDate.displayDate();
    }
};

int main(){
    Date d;
    Person p;
    Employee emp;
    cout<<"enter oerson datails"<<endl;
    p.acceptPerson();
    p.displayPerson();
    emp.acceptEmployee();
    emp.displayEmployee();
return 0;
}
