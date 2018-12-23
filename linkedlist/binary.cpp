// C program to implement iterative Binary Search
#include <iostream>
using namespace std;

 
// A iterative binary search function. It returns
// location of x in given array arr[l..r] if present,
// otherwise -1
int binarySearch(int arr[], int min, int max, int target)
{
    while (min <= max)
    {
      int guess = (max+min)/2;
 
        // Check if x is present at mid
        if (arr[guess] == target)
            return guess;
 
        // If x greater, ignore left half
       else if (arr[guess] < target)
            min = guess + 1;
 
        // If x is smaller, ignore right half
       else if (arr[guess]>target){
	 // max=guess-1;
            max = guess - 1;
       }
    }
 
    // if we reach here, then element was
    // not present
    return -1;
}
 
int main(void)
{
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int x = 10;
    int result = binarySearch(arr, 0, n-1, x);
    cout<<result;
    return 0;
}
