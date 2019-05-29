#include <iostream>
#include <string>
#include <set>
#include <unordered_set>
using namespace std;

/*
  int frequence[26]; //26 letters;

  //converts to int
  int hashfunc(char c){
  return (c - 'a');
  }


  // insert into hash table
  void countfrequence(string sentence_to_check){
  for (int i  = 0; i < sentence_to_check.length(); ++i){
  int  value = hashfunc(sentence_to_check[i]);
  frequence[value]++;
  }
  for (int i = 0; i < sentence_to_check.length(); ++i){
  cout << (char)(i + 'a') << " " << frequence[i] << endl;
  }
  
  }

*/
// Returns first repeating character in str. 
char firstRepeating(string &str) { 
  // Creates an empty hashset 
  unordered_set<char> h; 
  
  // Traverse the input array from left to right 
  for (int i=0; i<str.length(); i++) 
    { 
      char c = str[i]; 
  
      // If element is already in hash set, update x 
      // and then break 
      if (h.find(c) != h.end()){
	cout << "not unique";2
	return c;
      }
  
      else {// Else add element to hash set 
	h.insert(c);
      }
    } 
  
  // If there was no repeated character 
  cout << "all unqiue" << endl;
  return '\0'; 
} 


int main(){
  string str = "geeks";
  cout << firstRepeating(str);
}
