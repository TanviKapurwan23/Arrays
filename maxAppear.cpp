//Naive Method
#include <iostream>
using namespace std;

int maxAppear(int left[], int right[], int n){
    int freq[100] = {0}; // frequency array

    for(int i=0; i<n; i++){   // for each range increment the frequency of elements
        for(int j=left[i]; j<=right[i]; j++){
            freq[j]++;  // increment the frequency of elements
        }
    }

    int res = 0;   // result
    for(int i=1; i<100; i++){   // find the element with maximum frequency
        if(freq[i] > freq[res]){
            res = i;    // update the result
        }
    }
    return res;
}
int main(){
    int left[] = {1, 2, 4};
    int right[] = {4, 5, 7};
    int n = sizeof(left)/sizeof(left[0]);
    cout<<maxAppear(left, right, n);
    return 0;
}

// Time Complexity: O(n*max) where max is 100 in this case
