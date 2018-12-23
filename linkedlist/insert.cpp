//INSERT NODE IN THE BEGINNING OF THE LSIT 
#include <iostream>
using namespace std;


//struct to create Node
struct Node{
  int data;
  Node * next; //stores address of next
};

Node *head; //stores address of head
//global variable 

void insert(int x){
  //the following is literally a new node 
  Node *temp=new Node(); //temp variable that stores the address of that node 
  temp->data=x; //one part of Node
  temp->next=head; //and the next for now is initually is null if head is the only element or the next wll be the previous element 
  head=temp; //and how head is temp 
}

void print(){
  Node* temp=head;
  //traverse linked lsit
  while (temp!=NULL){ //then will go throught whole list
    cout<<temp->data;
    temp=temp->next;
  }
  cout<<"\n";
}


int main(){
  Node *head=NULL; //empty list

  //user input numbers ot the linked list
  cout<<"How many numbers"<<endl;
  int number;
  cin>>number;
  int x;
  
  for (int i=0; i<number; i++){
    cout<<"Enter number"<<endl;
    cin>>x;
    insert(x);
    print();
  }
  
}

