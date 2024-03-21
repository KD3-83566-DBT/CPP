#include<iostream>
using namespace std;
class tollbooth{
unsigned pcar;
unsigned ucar;
int total;
double cash;
public:
tollbooth(){
    pcar=0;
    ucar=0;
    total=0;
    cash =0;
}
void payingCar(){
    pcar++;
    cash= cash + 0.50;
    cout<<"entry is successful"<<endl;
}
void nopayCar(){
  ucar++;
  cout<<"entry is successful"<<endl;
}
 void printOnConsole(){
    total=pcar+ucar;
    cout<<"Total car pssed from tollbooth:  "<<total<<endl;
    cout<<"Total unpaying car from tollbooth:  "<<ucar<<endl;
    cout<<"Total paying car from tollbooth:   "<<pcar<<endl;
    cout<<"Total cash collection on tollbooth:  "<<cash<<endl;

 }
};

int main(){
tollbooth t1;
int choois;
do {
     cout<<"enter you choois for tollbooth"<<endl;
     cout<<"0:exit"<<endl;
    cout<<"1: unpaying car entered in tollbooth"<<endl;
    cout<<"2: paying car entered in tollbooth"<<endl;
    cout<<"3:display all information of tollbooth"<<endl;
    cin>>choois;
switch (choois)
{
case 0:
choois=0;
cout<<"thank you welcome to kolhapur"<<endl;
break;
case 1:
 t1.nopayCar();
break;
case 2:
t1.payingCar();
break;
case 3:
t1.printOnConsole();
break;

default:
cout<<"worng input"<<endl;
}

}while(choois=!0);
}

