#include<iostream>
using namespace std;

void moveZero(int arr[], int n){
  int count = 0;                  // count of non-zero elements
  for(int i=0; i<n; i++){         // Traverse the array. 
    if(arr[i] != 0){              // if element is non-zero, then replace the element at index count with this element.
        swap(arr[i], arr[count]); // swap the element with the element at index count.
        count++;                  // increment count.
    }
  }
}

int main(){
    int arr[] = {10, 8, 0, 0, 12, 0};      // Input array
    int n = sizeof(arr)/sizeof(arr[0]);    // size of array
    moveZero(arr, n);                      // Function call
    for(int i=0; i<n; i++){                // Output array
        cout<<arr[i]<<" ";
    }
   
    return 0;
}
// Time Complexity: O(n)
// Space Complexity: O(1)

// This is an efficient approach. 
//We are traversing the array only once. 
//We are maintaining a count of non-zero elements. 
//We are swapping the non-zero elements with the element at index count.
