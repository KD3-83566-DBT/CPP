#include<iostream>
using namespace std;
class Product{
 int id;
 string title;
 double price;
 double total;
 public:
 virtual void acceptData(){
  cout<<"enter  product ID......"<<endl;
  cin>>id;
  cout<<"enter title of product"<<endl;
  cin>>title;
  cout<<"Enete price pf Product"<<endl;
  cin>>price;
 }
 
 virtual void  displayData(){
   cout<<"ID_Product: "<<id<<endl;
   cout<<"Title :  "<<title<<endl;
   cout<<"Price :  "<<price<<endl;
 }

 void setPrice(int price){
    this->price=price;
 }

 int getPrice(){
 return price;
 }


//  void setTotal(int total){
//     this->total=total;
//  }

//  int getTotal(){
//  return total;
// }
};
class Book:public Product{
string author;
public:
void acceptData(){
    Product::acceptData();
    cout<<"enter  book author name"<<endl;
    cin>>author;
    setPrice((getPrice())-(getPrice()*0.10));
}
void displayData(){
  Product::displayData();
  cout<<"Auther :  "<<author<<endl;
}
void discount(){
    int price=(getPrice()-getPrice()*0.10);
 Product::setPrice(price); 
}
};

class Tape:public Product{
string artist;
public:
void acceptData(){
    Product::acceptData();
    cout<<"enter  artist name......"<<endl;
    cin>>artist;
    setPrice((getPrice())-(getPrice()*0.05));
}
void displayData(){
   Product::displayData();
   cout<<"artist : "<<artist<<endl;

}
void discount(){
    int price=((getPrice())-(getPrice()*0.10));
 Product::setPrice(price);
}
};
int main(){
    int choois;
    Product *arr[3];
    double total=0;
    int index=0;
    do{
  cout<<"enter your choois"<<endl;
    cout<<"0 : for exit from app"<<endl;
    cout<<"1 : enter book detailes"<<endl;
    cout<<"2 : enter Tape detailes"<<endl;
    cout<<"3 : display total bill"<<endl;
    cin>>choois;
    switch (choois)
    {
    case 0:
    choois=0;
    cout<<"thank you for using this app"<<endl;
    break;
    case 1:
    if(index<3){
    arr[index]=new Book;
    arr[index]->acceptData();
    index++;
    }
    else
    cout<<"Array is fulll............"<<endl;
    break;
    case 2:if(index<3){
    arr[index]=new Tape;
    arr[index]->acceptData();
    index++;
    }
    else
    cout<<"Array is fulll............"<<endl;
    break;
    case 3:
    for(int i=0;i<index;i++){
        total=total+arr[i]->getPrice();
    }
    for(int i=0;i<index;i++){
        arr[i]->displayData();
        cout<<"============================="<<endl;
    }
    cout<<"Total bill           "<<total<<endl;
    
    
    break;
 case 4:
    default:
    cout<<"invalied choois................."<<endl;
    break;
    }
}while (choois!=0);
 for (int i = 0; i < index; i++)
        delete arr[i];

}

