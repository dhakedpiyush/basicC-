#include<iostream>
#include<math.h>

using namespace std;
int func1(int num){
  int count=0;
  while(num!=0){
    num = num/10;
    ++count;

  }
  return count;
}
int func2(int num){
  if(num==0)
   return 0;

   return 1+ func2(num/10);

}

int func3(int num){
  return floor(log10(num)+1);

}

int main(){
  int num;
  cin>>num;
  /*int count;
  count = floor(log10(num)+1);
  cout<<count;*/
  cout<<func1(num);
  cout<<func2(num);
  cout<<func3(num);

}
