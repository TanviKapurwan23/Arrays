#include <iostream>
using namespace std;

int getLargest(int arr[], int n){
    for(int i=0; i<n; i++){
        bool flag = true;
        for(int j=0; j<n; j++){
            if(arr[j] > arr[i]){
                flag = false;   // if any element is greater than arr[i] then it is not the largest element
                break;
            }
        }
        if(flag == true){
            return i;         //   if no element is greater than arr[i] then it is the largest element 
        }   
    }
    return -1;
}

int main(){
    int arr[] = {5, 8, 20, 10};   // 20 is the largest element and its index is 2
    cout<<getLargest(arr, 4);

    return 0;
}

// This is a Naive approach and it is not efficient. TC: O(n^2) AS: O(1)
// Output: 2
