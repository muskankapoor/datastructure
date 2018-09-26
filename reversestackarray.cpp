//string reversal of stack 
#include <iostream>
#include <cstring>
#include <stack> //standard library implementation
using namespace std;

/*following oop implemetnaion but we will see the standard library implemtnaton
class Stack{
  private:
  char A[101];
  int top;
  
  public:
  void Push(int x);
  void Pop();
  int Top();
  bool isEmpty();
};
*/

void Reverse(/*char c[]*/ char* c, int n){
    //Stack s; //create object
    //or use the stand templare library 
    stack <char> s;
    //loop for push
    for (int i=0; i<n; i++){
        s.push(c[i]);
    }
    //loop for pop
    for (int i=0; i<n; i++){
        c[i]=s.top();  //first return stack
        s.pop();
    }
}

int main()
{
  char c[51];
  cout<<"enter a string";
  cin>>c;
  Reverse(c, strlen(c));
  cout<<c;
}
