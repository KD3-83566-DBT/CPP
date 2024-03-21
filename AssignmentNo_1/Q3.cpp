#include<iostream>
using namespace std;
class Student
{
int rollNo;
string name;
float marks;
public:
void initStudent()
{
  rollNo=83566;
  name="Pravin Mohite";
  marks=67; 
}
void printStudentOnConsole()
{
    cout<<"rollNo="<<rollNo<<endl;
    cout<<"name="<<name<<endl;
    cout<<"marks="<<marks<<endl;
}
void acceptStudentFromConsole()
{
  cout<<"Enter a student detailes"<<endl;
  cout<<"enter rollNo"<<endl;
  cin>>rollNo;
  cout<<"enter name of student"<<endl;
  cin>>name;
  cout<<"enter marks of student"<<endl;
  cin>>marks;
  cout<<"rollNo="<<rollNo<<endl;
    cout<<"name="<<name<<endl;
    cout<<"marks="<<marks<<endl;
}
};
int main()
{
  Student s1;
  s1.initStudent();
  int choois;
  do
  {
   cout<<" enter your choois"<<endl; 
   cout<<"0: Exit"<<endl;
   cout<<"1: init student"<<endl;
   cout<<"2: print student on cansole"<<endl;
   cout<<"3: accept student fron console"<<endl;
cin>>choois;

switch (choois)
{ 
  case 0:
    cout<<"Thank you for using this app"<<endl;
    break;
  
  case 1:
     s1.initStudent();
      break;
  
  case 2:
  s1.printStudentOnConsole();
  break;
  
  case 3:
s1.acceptStudentFromConsole();
break;
  
default:
cout<<"invalid choois"<<endl;
}

} while (choois!=0);
    return 0;
}
