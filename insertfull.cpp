#include <iostream>
using namespace std;

struct Node{
  int data;
  Node* next;
};

Node *head;


void insert(int data, int n){
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


void print(){
  Node *temp=head;
  while (temp!=NULL){
    cout<<temp->data;
    temp=temp->next;
  }
  cout<<"\n";
}


int main(){
    head=NULL; //initially list is empty 
    insert(2, 1);//at this point lsit is empty 
    insert(3, 2);
    insert(4, 1);
    insert(5, 2);
    print ();
}
