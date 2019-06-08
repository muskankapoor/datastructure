#include <iostream>
#include <set>

using namespace std;

/* Sets */
int main(){

  set<int> s;


  // iterators 
  set<int>::iterator it = s.begin();

  set<int>::iterator it1, it2;

  pair< set<int>::iterator, bool> ptr;

  ptr = s.insert(20);

  if (ptr.second) {
    cout << "The element was newly inserted" ;
  }
  else{
    cout  << "The element was already present" ; 
  }

  //print set
  for (it1 = s.begin(); it1!=s.end(); ++it1){
    cout << *it1 << " ";
  }

  s.insert(it, 24);

  for (it1 = s.begin(); it1!=s.end(); ++it1){
    cout << *it1 << " ";
  }

  int arr[3] = { 25, 24, 26 }; 
  s.insert(arr, arr+3); 
  
  // printing set elements after insertion 
  cout << "\nThe set elements after 3rd insertion are : "; 
  for (it1 = s.begin(); it1!=s.end();  ++it1) 
    cout << *it1 << " "; 
  
}
