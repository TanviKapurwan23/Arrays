#include<bits/stdc++.h>
using namespace std;

int insertSorted(){
  if(n >= capacity){
    return n;
  }
  int i;
  for (i = n - 1; (i >= 0 && arr[i] > key); i--)
        arr[i + 1] = arr[i];

    arr[i + 1] = key;

    return (n + 1);
}

int main(){
    int arr[20] = {12, 16, 20, 40, 50, 70};
    int capacity = sizeof(arr)/sizeof(arr[0]);
    int n = 6;
    int i, key = 26;

    cout<<"Before Insertion"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }

    n = sortedArray(arr, n, key, capacity);

    cout<<"After Insertion"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }







    return 0;
}