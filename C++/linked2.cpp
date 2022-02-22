#include <iostream>
using namespace std;

class Node{
    public :
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = NULL;
    }

};

void print(Node* head){
     Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        cout << temp->data << " -> ";
         temp = temp->next;
    }
    cout << " NULL";
    cout << "\n" << count << endl;

}
int main() {
    Node* head = new Node(200);
    Node* f2 = new Node(30);
    Node* f3 = new Node(60);
    Node* f4 = new Node(80);
    Node* f5 = new Node(10);
    Node* f6 = new Node(40);

    head->next = f2;
    f2->next = f3;
    f3->next = f4;
    f4->next = f5;
    f5->next = f6;


    print(head);

    //delete f3
    //f2->next = f4
    // delete last node
    // temp = head;
    // while(temp->next->next != NULL){
    //     temp = temp->next;
    // }
    // temp->next = NULL;
    // Node* ss = head;
    // head = head->next;
    // print array
    // temp = head;
    // while(temp != NULL){
    //     cout << temp->data << " -> ";
    //      temp = temp->next;
    // }
    // cout << " NULL\n";
   // delete 40
    if(head->data == 40){
        head = head->next;
    }
    Node* temp = head;
    while(temp != NULL){


        if(temp->next != NULL && temp->next->data == 40){
            temp->next = temp->next->next;
            break;
        }

        temp = temp->next;

    }
    print(head);




}
