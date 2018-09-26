// Example program
#include <iostream>
#include <string>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* Reverse(Node* head){
    Node *current, *prev, *next;
    current=head;
    prev=NULL;
    while(current!=NULL){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
    return head;
}

Node* Insert(Node* head, int data){
    Node* temp=new Node();
    temp->data=data;
    temp->next=NULL;
    if (head==NULL){
        head=temp;
    }
    else{
        Node* temp1=head;
        while(temp1->next!=NULL){
            temp1=temp1->next;
        }
        temp1->next=temp;
    }
    return head;
}

void Print(Node* head){
    while (head!=NULL){
        cout<<head->data;
        head=head->next;
    }
}

int main(){
    Node* head=NULL;
    head=Insert(head, 2);
    head=Insert(head, 4);
    head=Insert(head, 6);
    head=Insert(head, 8);
    Print(head);
    cout<<endl;
    head=Reverse(head);
    Print(head);
}
