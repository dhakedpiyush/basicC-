#include<iostream>
#include<math.h>
using namespace std;

int main()
{
 int num;
 cin>>num;
  int sum = 0;
  int orgn = num;

  while(num>0)
  {
     int last = num%10;
     sum+= pow(last,3);
     num= num/10;

  }

  if(sum==orgn)
  {
     cout<<"Armstrong number";

  }
  else
  {
     cout<<"Not armstrong";
  }

}
