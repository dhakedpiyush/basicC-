#include<iostream>
using namespace std;

int fact(int num)
{
   int f =1;
   for(int i=2;i<=num;i++)
   {
      f*=i;

   }
return f;
}

int main()
{
   int num,ans;
   cout<<"Enter a number";
   cin>>num;
    ans= fact(num);
cout<<ans<<endl;

}
