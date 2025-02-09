#include<iostream>
using namespace std;

int getSum(int arr[], int l, int r){
    int res = 0;
    for(int i=l; i<=r; i++){
        res += arr[i];
    }
    return res;
}

int main(){
    int arr[] = {2, 8, 3, 9, 6, 5, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout<<getSum(arr, 1, 3)<<endl;

    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)   

// Prefix Sum Technique

// sum of element from index 1 to 3 : 8 + 3 + 9 = 20
