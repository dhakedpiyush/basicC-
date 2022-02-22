#include<iostream>
#include<math.h>

using namespace std;
void palin(int num)
{
   int rev = 0 ;
   int temp = num;
   while(temp!=0){
   int ld = temp %10;
   rev = rev *10 + ld;
   temp = temp/10;
 }
 string res;
 if(rev==num)
 res = "Palindrome";
 cout<<res;
}

int main()
{
   int num;
   cin>>num;
   palin(num);
}
