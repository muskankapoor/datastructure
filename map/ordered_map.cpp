#include <iostream>
#include <map>
using namespace std;
#include <iterator> 

  
int main(){

  map<int, int> container;

  cout << "insert elements" << endl;

  container.insert(pair<int, int>(1, 40));

  cout << endl;

  container.insert(pair<int, int>(2, 30));

    cout << endl;

  container.insert(pair<int, int>(3, 60));

    cout << endl;
  
  container.insert(pair<int, int>(4, 20));

    cout << endl;
  
  container.insert(pair<int, int>(5, 50));

    cout << endl;

    cout << "print map " << endl;
  //print map
  map<int, int>::iterator it;

  for (it = container.begin(); it!=container.end(); ++it){

    cout << it->first << " " << it->second << endl;;

  }


  cout << endl;
  cout << "shifting elements of one map to another" << endl;
  map<int, int> container1(container.begin(), container.end());

  for (it = container1.begin(); it!=container1.end(); ++it){

    cout << it->first << " " << it->second <<  endl;

  }

  cout << endl;

  cout << " remove elemnts up to element with key = 3 " << endl;

  container1.erase(container1.begin(), container1.find(3));

  for (it = container1.begin(); it!=container1.end(); ++it){

    cout << it->first << " " << it->second  <<  endl;

  }


  cout << endl;
  cout << " remove all elements with key = 4 " << endl;

  // container1.erase(container1.find(4));
  int num = container1.erase(4);

 
  for (it = container1.begin(); it!=container1.end(); ++it){

    cout << it->first << " " << it->second  <<  endl;

  }

  cout << endl;

}
