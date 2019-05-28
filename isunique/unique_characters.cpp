// how to determine if a string has all unique characters
#include <iostream>
#include <string>
#include <vector>
#include <iostream>
#include <bitset>
using namespace std;


bool isUniqueChars(string sentence_to_check){

  
  for (int i = 0; i <sentence_to_check.length()-1; i++){ //5 abcde 
    for (int j = i + 1; j <sentence_to_check.length(); j++){ //4 bcde
      if (sentence_to_check[i] == sentence_to_check[j]){ 
	return false;
      }
    }
  }
  return true;
  }





 
int main() 
{ 
  // string str = "GeeksforGeeks"; 
  string str = "abcde";
    if (isUniqueChars(str)) { 
        cout << "The String " << str 
             << " has all unique characters\n"; 
    } 
    else { 
        cout << "The String " << str 
             << " has duplicate characters\n"; 
    } 
    return 0;
}
