#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};

void printlist(Node* n){                    //Function to traverse and print list
   while(n != NULL){
     cout << n->data << " ";
     n = n->next;
   }
}

void push(Node** head_ref , int new_data){    //Push Function in Start of list
  Node* new_node = new Node();
  new_node->data = new_data;
  new_node->next = (*head_ref);
  (*head_ref)= new_node;

  while(new_node != NULL){
    cout<<new_node->data<<" ";
    new_node = new_node->next;
  }

}

int insertafter(Node* prev_node, int new_data, Node* head){

   if(prev_node == NULL){
     cout<<"Previous Node cannot be NULL ";
     return 0;
   }

  Node* new_node = new Node();
  new_node->data = new_data;
  new_node->next = prev_node->next;
  prev_node->next = new_node;
  while(head!= NULL)
  {
     cout<<head->data<< " ";
     head = head->next;
  }

}
int main()
{
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    // Allocate these in the Heap using new keyword;

    head = new Node();
    second = new Node();
    third = new Node();

    // Now lets allocate them some values;

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    printlist(head);

    int newval;

    cout<<"\nEnter Element to insert into Linked list : ";
    cin>>newval;
    cout<<"\nNew Linked list is : ";
    push(&head,newval);

    int prevval,val;
    cout<<"\nEnter Element to insert after number : ";
    cin>>prevval;
    cout<<"\nEnter the number you want to enter : ";
    cin>>val;
    insertafter(second,val,head);

    return 0;
}
