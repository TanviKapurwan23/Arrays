#include<iostream>
using namespace std;

int remDups(int arr[], int n){
    int res = 1;                        // res is the index of the next unique element
    for(int i=1; i<n; i++){             // Start from the second element and compare it with the previous element
        if(arr[i] != arr[res - 1]){     // If the current element is not equal to the previous element
            arr[res] = arr[i];          // Copy the current element to the next unique element
            res++;                      // Increment the index of the next unique element
        }
    }
    return res;
}

int main(){
    int arr[] = {10, 20, 20, 30, 30, 30};
    int n = sizeof(arr)/sizeof(arr[0]);
    n = remDups(arr, n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)

// Input: arr[] = {10, 20, 20, 30, 30, 30}
// Output: 10 20 30
