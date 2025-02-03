#include<iostream>
using namespace std;

void moveZero(int arr[], int n){
    for(int i=0; i<n; i++){
        if(arr[i] == 0){              // If element is 0, then swap it with the next non-zero element
            for(int j=i+1; j<n; j++){  // If next element is also 0, then swap it with the next non-zero element
                if(arr[j] != 0){       // If next element is non-zero, then swap it with the current element
                    swap(arr[i], arr[j]);
                }
            }
        }
    }
}

int main(){
    int arr[] = {10, 5, 0, 0, 8, 0 ,9};    // array with zeros
    int n = sizeof(arr)/sizeof(arr[0]);    // size of array
    moveZero(arr, n);                     // move zeros to the end
    for(int i=0; i<n; i++){                // print the array
        cout<<arr[i]<<" ";
    }

    return 0;
}

// Naive Approach
// Time Complexity: O(n^2)
// Space Complexity: O(1)
