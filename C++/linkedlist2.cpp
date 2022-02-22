#include<iostream>
using namespace std;

class Node{
public:
  int data;
  Node* next;

};

int deletevalue(Node** head_ref, int key){

  Node* temp = *head_ref;
  Node* prev = NULL;

  if(temp != NULL && temp->data==key){
    *head_ref = temp->next;
    delete temp;
    return 0;
  }

  else{
    while(temp != NULL && temp -> data != key){
      prev = temp;
      temp = temp->next;
    }
    if(temp==NULL){
      return 0 ;
    }
    prev->next = temp->next;
    delete temp;
  }

}

printlist(Node* n){
  while(n!=NULL){
    cout<<n->data<<" ";
    n = n->next;
  }
}
int main(){
  Node* head = NULL;
  Node* second = NULL;
  Node* third = NULL;

  head= new Node();
  second = new Node();
  third = new Node();

  head->data = 6;
  head->next = second;

  second->data = 5;
  second->next = third;

  third->data = 7;
  third-> next = NULL;
  printlist(head);
  cout<<endl;

  deletevalue(&head , 5);
  printlist(head);
}
