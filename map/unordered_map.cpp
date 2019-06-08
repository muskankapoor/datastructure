#include <iostream>
#include <unordered_map> 
#include <iterator>
using namespace std;



int main(){

  unordered_map<string, int> temp;

  cout << "insert elemetns\n";

  temp["Muskan"] = 20;

  temp["Jatin"] = 14;

  temp["Bell"] = 2;

  unordered_map<string, double>:: iterator itr; 
  
  cout << " Traversing an unordered map\n"; 
  for (auto x : temp) {

    cout << x.first << " " << x.second << endl;
 

  }

  cout << " insert more\n";

  temp.insert(make_pair("Anshu", 22));

  string key = "Nanah";

  if (temp.find(key) == temp.end()) {
    cout << key << " not found\n\n";
  }
  
  // If key found then iterator to that key is returned 
  else
    cout << "Found " << key << "\n\n"; 
  
  key = "Anshu"; 
  if (temp.find(key) == temp.end()) 
    cout << key << " not found\n"; 
  else
    cout << "Found " << key << endl; 
  /*
  //    iterating over all value of umap 
  // unordered_map<string, double>:: iterator itr; 
  cout << "\nAll Elements : \n"; 
  for (temp.begin(); itr != temp.end(); itr++) 
    { 
     
    cout << itr->first << "  " << itr->second << endl; */
    
} 
