#include<iostream>
using namespace std;
class box{
  int length ;
  int width ;
  int height; 
  // int volume; 
  public:
box(){  
    length=1 ;
   width=1;
 height=1;
}
box(int length ,int width ,int height){
  this->length=length;
  this->width=width; 
  this->height=height; 
}
box(int length){
this->length=length;
this->width=length;
this->height=length;
}
int calVolume(){
  int volume=length*width*height;
  return volume;
}

};
int main(){
    int choois;
    int volume;
   do{
    cout<<"enter your choois"<<endl;
    cout<<"0 : fro exit from app"<<endl;
    cout<<"1 :Calculate volume with defefult value"<<endl;
    cout<<"2 :Calculate Volume with length,breadth and height with same value"<<endl;
    cout<<"3 :Calculate Volume with different length,breadth and height values"<<endl;
    cin>>choois;
    switch (choois)
    {
    case 0:{
    choois=0;
    cout<<"thank you for using this app"<<endl;
    break;
    }
    case 1:{
      box b1;
      cout<<"volume =  "<<b1.calVolume()<<endl;
      break;
    }
    case 2:{
  
      box b2(10);
       cout<<"volume =  "<<b2.calVolume()<<endl;
      break;

    }
    case 3:{
      box b3(10,20,30);
       cout<<"volume =  "<<b3.calVolume()<<endl;
      break;
    }
    default:
    cout<<"woring input enterd"<<endl;

   }
   }while (choois=!0);
   return 0;
    /* code */
   }
   

 