#include<iostream>
using namespace std;

int count(int num){
  int fact = 1;
  for(int i = 2; i<=num;i++){
    fact = fact*i;
  }
  int res = 0;
  while(fact%10 ==0){
    res++;
    fact = fact/10;
  }
  return res;
}
int main()
{  int num;
   cin>>num;
    cout<<count(num);
 }
