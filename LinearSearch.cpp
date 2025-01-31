#include<iostream>
using namespace std;

int search(int arr[], int n, int x){
    for(int i=0; i<n; i++){
        if(arr[i] == x){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {5, 4, 9, 1, 6};               // 0 1 2 3 4  index
    int size = sizeof(arr)/sizeof(arr[0]);
    int x = 1;

    int result = search(arr, size, x);

    if(result != 1){
        cout<<"Element is present at index "<<result<<endl;
    }else{
        cout<<"Element is not present in array"<<endl;
    }

    return 0;
}
