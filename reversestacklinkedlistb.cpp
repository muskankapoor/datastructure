#include<iostream>
#include<stack>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* head;

void reverse(){
    if(head==NULL){
        return;
    }
    else{
    stack <Node*> s;
    Node* temp = head;
    while(temp!=NULL){
        s.push(temp);
        temp = temp->next;
    }
    Node* temp2 = s.top();
    head = temp2;
    s.pop();
    while(!s.empty()){
        temp2->next = s.top();
        s.pop();
        temp2=temp2->next;
    }
    temp2->next = NULL;
    }
}

Node* insert(Node* head, int x){
    Node* temp = new Node();
    temp->data = x;
    temp->next = NULL;
    if(head==NULL){
        head = temp;
    }
    else{
    Node* temp2 = head;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    temp2->next = temp;
    return head;
    }
}

void print(){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

int main(){
    head = NULL;
    head = insert(head,1);
    head = insert(head,2);
    head = insert(head,3);
    head = insert(head,4);
    print();
    cout<<endl;
    reverse();
    print();
}
