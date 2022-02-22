#include<iostream>
using namespace std;

int bin(int arr[], int n , int key)
{
   int s=0;
   int e=n;
   while(s<=e)
   {
      int mid = (s+e)/2;

      if(arr[mid]==key)
      {
         return mid+1;
      }
      else if(arr[mid]>key)
      {
        e=mid-1;
      }
      else{
      s=mid+1;
    }

   }
   return -1;
}

int main()
{
  cout<<"Enter size of the array \n";
  int n;
  cin>>n;
  int arr[n];
  cout<<"Enter array element \n";
  for(int i = 0;i<n;i++)
  {
     cin>>arr[i];
  }

  cout<<"Enter the element to be found \n ";
  int key;
  cin>>key;

  cout<<bin(arr,n,key);

}
