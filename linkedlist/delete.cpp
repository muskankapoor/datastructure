#include <iostream>
using namespace std;

struct Node{
  int data;
  Node *next;
};

Node* head; //address of first node


void insert(int data, int n){//insert and integer at end of list 
  Node *temp1=new Node();
  temp1->data=data;
  temp1->next=NULL;
  //IF EMPTY LIST
  if (n==1){
    temp1->next=head; //will become head address since only 1
    head=temp1; //store address of the newly created node
    return;
  }
  Node *temp2=head;
  for (int i=0; i<n-2; i++){
    temp2=temp2->next;
  }
  temp1->next=temp2->next; //make previous node
  temp2->next=temp1;

}


void del(int n){ //to delete
  Node* temp1=head;
  //if asked to delete n==1 node (head node)
  if (n==1){
    head=temp1->next;
    delete temp1;
    return; //same as making the following an else statmeent 
  }
  //we have to go to the n-1 node
  int i;
  for (i=0; i<n-2; i++){
    temp1=temp1->next;
  }
  //now we need it for the nth node
  Node* temp2=temp1->next;
  temp1->next=temp2->next; //(n+1 node)
  delete temp2;
  


}

void print(){
  Node *temp=head;
  while (temp!=NULL){
    cout<<temp->data;
    temp=temp->next;
  }
  cout<<"\n";
}

 


  

int main(){
  head=NULL; //inital list
  insert(2, 1);
  insert(4, 2);
  insert(6, 3);
  insert(5, 4);
  print();
  int n;
  cin>>n;
  del(n);
  print();
}
