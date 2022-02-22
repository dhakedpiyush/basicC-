#include<iostream>
using namespace std;

int main()
{
   int num;
   cin>>num;
   int rev;
   while(num>0)
   {
      int last = num%10;
      rev = rev*10 + last;
      num = num/10;
      
   }
   cout<<rev;

}
