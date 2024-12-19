#include<iostream>
using namespace std;

int linear(int arr[],int n , int key);

int linear( int arr[], int n , int key)
{
   for(int i= 0; i<n;i++)
   {
      if(arr[i]==key)
      return (i+1);
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

   cout<<linear(arr,n,key);
   cout<<linear(arr,n,key); //No Need of this.
   cout<<linear(arr,n,key); //No need of this.

}
