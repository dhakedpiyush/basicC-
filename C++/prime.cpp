#include<iostream>
#include<math.h>
using namespace std;

int main()
{
  int num;
  cin>>num;
 int flag=0;

  for(int i=2;i<sqrt(num);i++)
  {
     if(num%i==0)
     {
        cout<<"Non Prime";

        flag++;
        break;
     }

  }
  if(flag==0)
  {
     cout<<"Prime number";
  }
}
