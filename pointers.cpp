#include<iostream>
using namespace std;

int main(){

    int arr[10];

    for(int i=0; i<10; i++){
      *(arr + i) = i + 1;
    }

    cout<<"values : ";

    for(int i=0; i<10; i++){
        cout<<*(arr + i)<<' ';
    }
    return 0;
}

// As known, 
// *(p + 1) is exactly the same as *(1 + p)
// Therefore, *(arr + i) in above code can also be written as *(i + arr)
// and basically *(arr + i) means a[i] implying, 
// *(i + arr) can also be written as i[a]
// Pointer Arithmetic: *(arr + i) is equivalent to arr[i]. This demonstrates how pointers can be used to traverse and manipulate arrays.
