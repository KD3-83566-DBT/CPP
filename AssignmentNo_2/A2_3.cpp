#include<iostream>
using namespace std;
class Address{

    string building;
     string street;
      string city ;
      int pin;
public:
    Address()
    {
     building="sunbeam";
     street="karad main road";
     city="karad";
     pin=410115;
      }

      Address(string building,string street,string city,int pin )
      {
     this->building=building;
     this->street=street;
     this->city=city;
     this->pin=pin;
      }

void setBuilding(string building){
  this->building=building;
}
void setStreet(string street){
  this->street=street;
}
void setCity(string city){
  this->city=city;
}
void setPin(int pin){
  this->pin=pin;
}
string getBuilding(){
  return building;
}
string getStreet(){
  return street;
}
string getCity(){
   return city;
}
int getPin(){
  return pin;
}
      void display(){
        cout<<"building: "<<building<<endl;
        cout<<"street:  "<<street<<endl;
        cout<<"city:  "<<city<<endl;
        cout<<"PIN:  "<<pin<<endl;
      }
      void accept(){
cout<<"enter building: "<<endl;
    cin>>building;
    cout<<"enter street:  "<<endl;
    cin>>street;
    cout<<"enter city:  "<<endl;
    cin>>city;
    cout<<"enter PIN:  "<<endl;
    cin>>pin; 
      }
};
int main(){

    Address a1("Sunbeam1","mj road","karad",416146);
    a1.display();
    Address a2;
    a2.accept();
    a2.display();
    
    return 0;
}