#include<iostream>
using namespace std;

class Node
{
public:
  int data;
  Node* next;
  Node(int x)
{
  data =x ;
  next = NULL;
}

};

int main()
{
   Node* head = new Node(10);
   Node* f2 = new Node(20);
   Node* f3 = new Node(30);
   Node* f4 = new Node(40);


   head->next = f2;
   f2->next = f3;
   f3->next = f4;

   Node* temp = head;
   while(temp!=NULL)
   {
      cout<<temp <<temp->data << " -> ";
      temp= temp->next;

   }
   cout<<" NULL";


}
