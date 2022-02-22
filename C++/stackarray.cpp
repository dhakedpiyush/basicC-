#include<iostream>
using namespace std;

class Stack
{
   int val;
   int a[size];
   int top;
 public:
   Stack(){
     top==-1;
   }

   void push(int x);
   void pop();
   void print();


};

void Stack::push(int val){
  if(top>=size-1){
    cout<<"Overflow";
  }
    else{
      top++;
      a[top]= val;
    }
}

void Stack::pop(){
  if(top<0){
    cout<<"Underflow";
  }
  else{
    cout<<"deleted value is : "<<a[top];
  }
  top--;
}

void Stack::print(){
  if(top==size-1){
    cout<<"Underflow";
  }
  else{
    for(int i=0;i<=top;i++){
      cout<<a[i]<< " "<<endl;
    }
  }
}

int main(){
Stack s;
s.push(10);
s.push(20);
s.push(30);
s.pop();
s.print();
}
