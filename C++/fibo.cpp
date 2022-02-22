#include<iostream>
using namespace std;

void fib(int num)
{
   int t1 =0 , t2=1, nt;
   for(int i = 1;i<=num;i++)
   {
      cout<<t1<<endl;
      nt= t1+t2;
      t1=t2;
      t2= nt;

   }
   return;
}


int main()
{
   int num;
   cout<<"Enter number";
   cin>>num
   fib(num);
   return 0;

}
