#include<iostream>
using namespace std;
class Cylinder
{
private:
   double radius;
   double height;
   const static double pi;
public:
Cylinder():Cylinder(1,1){
    
}
Cylinder(double radius,double height){
   this-> radius=radius;
    this->height=height;
}
 void setRadius(double radius){
    this->radius=radius;

 }
double getRadius(){
return radius;
}
void setHeight(double height){
    this->height=height;

 }
double getHeight(){
return height;
}
double getVolume(){
    return pi*height*radius;
}
void printVolume(){
    cout<<"printVolume:  "<<getVolume()<<endl;
}

};
double const Cylinder::pi=3.14;

int main(){
Cylinder c1;
double radius1;
double height1;
Cylinder c2(10,20);
cout<<"value of radius: "<<c2.getRadius()<<endl;
cout<<"value of Height: "<<c2.getHeight()<<endl;
cout<<"enter value radius"<<endl;
cin>>radius1;
c2.setRadius(radius1);
cout<<"enter value height"<<endl;
cin>>height1;
c2.setHeight(height1);
cout<<"getVolume(): "<<c2.getVolume()<<endl;
c2.printVolume();
return 0;
}
