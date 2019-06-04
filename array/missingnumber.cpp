#include<iostream>
#include <vector>
#include <array>
using namespace std;

// 1 2 3  5


// 1 2 3 5

int missingNumber(int arr[]){

  int size  = (sizeof(arr)/sizeof(*arr));
  for (int i = 0; i < size; i++){
    if (arr[i+1] - arr[i] != 1){
      return  arr[i] + 1;
    }
  }
  return 0;
}

int main(){

  int arr1[] = {1, 2, 3, 5};
  // int size = 4;
  cout << missingNumber(arr1) << endl;
  return 0;
}
