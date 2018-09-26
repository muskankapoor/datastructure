#include <iostream>
#include <string>
//doubly linked lsit
using namespace std;

struct Node{
    int data; //store data
    Node* prev; //reference to previous node
    Node* next; //reference to next done
};

Node* head; //global variable

Node* createNode(int x){
    Node* temp=new Node();
    temp->data=x; //*temp=x
    temp->prev=NULL;
    temp->next=NULL;
    return temp;
}

void InsertAtHead(int x){
    Node*temp=createNode(x);
    //two cases: lisst can be empty
    if (head==NULL){
        head=temp;
        return;
    }
    //list not empty
    head->prev=temp; //head's previous node equal to the new head node since inserting it at head
    temp->next=head; //make head's next what the previous value of head was
    head=temp; //head now equal temp
}

void InsertAtTail(int x){
  Node *temp=head;
  Node *newNode=createNode(x);
  if (head==NULL){
    head=newNode;
    return;
  }
  while(temp->next != NULL){ //go to last  node at this point
    temp = temp->next;
  }
  temp->next = newNode;
  newNode->prev = temp;
}
  


void Print(){
    Node* temp=head;
    cout<<"Forward: ";
    while (temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
    cout<<"\n";
}

void ReversePrint(){
    Node* temp=head;
    if (temp==NULL){
        return; //empty list exit
    }
    //go to last node
    while (temp->next!=NULL){
        temp=temp->next;
    }
    //traverse backward
    cout<<"Reverse ";
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->prev;
    }
    cout<<"\n";
}


int main(){
    head=NULL;
    InsertAtHead(2); 
    Print();
    ReversePrint();
    InsertAtHead(4); 
    Print();
    ReversePrint();
    InsertAtHead(6); 
    Print();
    ReversePrint();
    InsertAtTail(2); Print(); ReversePrint();
    InsertAtTail(4); Print(); ReversePrint();
    InsertAtHead(6); Print(); ReversePrint();
    InsertAtTail(8); Print(); ReversePrint();
}
