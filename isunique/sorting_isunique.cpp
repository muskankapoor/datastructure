#include <iostream>
#include <vector>
#include <string>
using namespace std;




void unique_characters(string sentence_to_check){
  vector<int> vect;
  for (int i = 0; i<sentence_to_check.length(); i++){
    int c = int(sentence_to_check[i]);
    vect.push_back(c);
    //cout << endl;
    
  }
  for (int j = 0; j <  vect.size(); j++){
    cout << vect.at(j); //[i];
    cout << endl;
  }
    
  //return vect.at(i);
}





int main(){
  string a = "abcde";
  //vector<int> vect;
  unique_characters(a);
}
  
