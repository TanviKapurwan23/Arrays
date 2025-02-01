#include<iostream>
using namespace std;

int deleteElement(int arr[], int n, int x){
    int i;
    for(i=0; i<n; i++){
        if(arr[i] == x){
            break;   // stop the loop when element is found
        }
    }

    if(i == n){        // element not found
        return n;
    }

    // shift elements left to fill the gap

    for(int j=i ;j<n-1; j++){
        arr[j] = arr[j+1];
    }

    return n-1;
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[] = {3, 8, 12, 5, 6};
    int n = 5;

    cout<<"Original Array: ";
    printArray(arr, n);

    // Test Case 1: delete 12

    n = deleteElement(arr, n, 12);
    cout<<"Array after deleting 12: ";
    printArray(arr, n);

    // Test Case 2: delete 3 (first element)
    n = deleteElement(arr, n, 3);
    cout<<"Array after deleting 3: ";
    printArray(arr, n);

    // Test Case 3: delete 6 (last element)
    n  = deleteElement(arr, n, 6);
    cout<<"Array after deleting 6: ";
    printArray(arr, n);

    // Test Case 4: delete 7 (element not present)
    n = deleteElement(arr, n, 7);
    cout<<"Array after deleting 7: ";
    printArray(arr, n);


    return 0;
}
