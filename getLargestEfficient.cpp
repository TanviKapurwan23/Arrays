// get largest element Efficeint approach

#include <iostream>
using namespace std;
 
 int getLargest(int arr[], int n){
        int res = 0;
        for(int i=0; i<n; i++){
            if(arr[i] > arr[res]){
                res = i;
            }
        }
        return res;
 }

int main(){
    int arr[] = {10, 5, 20, 8};
    int n = 4;
    cout<<getLargest(arr, n);

    return 0;
}


// This is an efficient approach to get the largest element in the array. TC: O(n) and SC: O(1)
// Output: 2



