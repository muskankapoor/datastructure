#include <iostream>
#include <string>
#include <algorithm>
using namespace std;



//write a method to replace all spaces in a string %20
// first count the number of spaces 
string urlify(string str, int length){
 
   int num = 0;
   char space = ' ';
   //char letterRead;

   for (int i = 0; i < length; i++) { //input[i] > letterRead; i++)
     if (str[i] == space){
       num++;
     }
   }
   int newlength = (length - 1) + 2 * num;
   for (int i = length; i >=0; --i){
     if (str[i] == space){
       str[i] = '0';
       str[i-1] = '2';
       str[i-2] = '%';
     }
   }
   return str;

}



int main(){
  cout << urlify("Mr John Smith ", 13);
  cout << endl << endl;
}
