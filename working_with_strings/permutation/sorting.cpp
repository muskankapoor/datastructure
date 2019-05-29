#include <iostream>
#include <string>
using namespace std;

//two strings are perfumations
//same length


string sortstring(string str){
  //string new_string = "";
  sort(str.begin(), str.end()); 
  return str; 
}


bool isperfumtation(string old_str1, string old_str2){
  string str1 =  sortstring(old_str1);
  string  str2 =  sortstring(old_str2);

 
  for (int i = 0; i < str1.length(); i++){
    if (str1[i]!=str2[i]){
      return false;
      cout << "not perfumation" << endl;
    }
  }
  cout << "isperfumtation" << endl;
  return true;

  cout << str1 << endl << str2 << endl;
  
}

  
  
int main(){
  
  cout << isperfumtation("bac", "bag") << " answer should be not " << endl;
  cout << isperfumtation("abc", "bac") << " answer should be " << endl;

		     
}
    
