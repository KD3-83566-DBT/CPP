#include<iostream>
using namespace std;
class Stack{
int size;;
int top=-1;
int *ptr;
public:
Stack(int size=5){
this->size=size;
ptr= new int[size];
}
void push(int val) {
   if(top>=size-1)
   cout<<"Stack Overflow"<<endl;
   else {
      top++;
      ptr[top]=val;
      cout<<"value added sucssfuly"<<endl;
   }
}
void pop() {
   if(top<=-1)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< ptr[top] <<endl;
      top--;
   }
}
void display() {
   if(top>=0) {
      cout<<"Stack elements are:";
      for(int i=top; i>=0; i--)
      cout<<ptr[i]<<" ";
      cout<<endl;
   } else
   cout<<"Stack is empty"<<endl;
}
void peek(){
    if(top<=-1){
        cout<<"stack is empty...."<<endl;
    }
    else{
        cout<<"value at peek is: "<<ptr[top]<<endl;
    }
}
void isempty(){
    if(top<=-1){
        cout<<"stack is empty...."<<endl;
    }
    else{
        cout<<"stack contain some values..."<<endl;
    }
}
    void isfull(){
        if(top>=(size-1)){
            cout<<"satck is full...."<<endl;
        }
        else{
            cout<<"stack is contain some space"<<endl;
        }
    };

};

int main(){
Stack s;
int choois;
do{
    cout<<"0: exit....."<<endl;
    cout<<"1: push value in stack"<<endl;
    cout<<"2: pop vlue from stsck "<<endl;
    cout<<"3: disply value from stack"<<endl;
    cout<<"4: peek value from stack"<<endl;
    cout<<"5: check stack is full or not"<<endl;
    cout<<"6: check stack is empty or not"<<endl;
    cout<<"Enter your choois........"<<endl;
    cin>>choois;
    switch (choois)
    {
    case 0:
    cout<<"thank you for using this app"<<endl;
    choois=0;
    break;

    case 1:
    int val;
    cout<<"enter value"<<endl;
    cin>>val;
    s.push(val);
    break;

    case 2:
    cout<<"pop value from stack"<<endl;
    s.pop();
    break;

    case 3:
    s.display();
    break;
    case 4:
    s.peek();
    break;
    case 5:
    s.isfull();
    break;
    case 6:
    s.isempty();
    break;
    default:
    cout<<"invalied choois......."<<endl;
        break;
    }
}while(choois!=0);


}