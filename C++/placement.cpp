/* Question - Given an array ar[] of size N.
The task is to find the first repeating element in the array of
integers, i.e., an element that occurs more than once and whose
index of first occurrence is smallest.*/


#include<iostream>
using namespace std;

int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
      cin>>arr[i];
   }

   const int N = 10000;
   int idx[N];

   for(int i =0;i<N;i++)
    {
       idx[i]= -1;
    }

    int minidx = INT_MAX;

    for(int i=0;i<n;i++)
    {
       if(idx[arr[i]] != -1)
       {
       minidx = min(minidx , idx[arr[i]]);
        }
       else
      {
        idx[arr[i]] =i;
      }

    }

    if(minidx==INT_MAX)
    {
       cout<<"-1"<<endl;
    }
    else
    {
       cout<<minidx +1 <<endl;
    }
}
