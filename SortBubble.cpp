#include<iostream>

using namespace std;

void swap( int *p , int *q){
     int temp;
     temp = *p;
     *p = *q;
     *q = temp;
}

void bubbleSort(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++){
        if (arr[j] > arr[j+1]);
        swap(&arr[j], &arr[j+1]);}
    }

    
}

void printArray(int arr[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
} 

int main(){
    int n, a[20];
    cin>>n;
    
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    bubbleSort(a,n);
    cout<<"Sorted array: \n"; 
    printArray(a, n); 
    return 0;
}