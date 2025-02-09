//Efficient Method
#include <iostream>
using namespace std;

int maxAppear(int left[], int right[], int n){
    int freq[101] = {0};   // 0 to 100
    for(int i=0; i<n; i++){   // Increment the left index and decrement the right index
        freq[left[i]]++;
        freq[right[i] + 1]--;
    }

    int res = 0;
    for(int i=1; i<100; i++){     // Prefix sum
        freq[i] = freq[i-1] + freq[i];   // freq[i] stores the frequency of i
        if(freq[i] > freq[res]){   // Find the maximum frequency
            res=i;                 // res stores the element with maximum frequency
        }
    }
    return res;      // Return the element with maximum frequency
}



int main(){
    int left[] = {1, 2, 4};
    int right[] = {4, 5, 7};
    int n = sizeof(left)/sizeof(left[0]);
    cout<<maxAppear(left, right, n);
    return 0;
}

// Time Complexity: O(n + max), where max = 100


