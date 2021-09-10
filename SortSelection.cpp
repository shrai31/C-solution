#include<iostream>

using namespace std;

void selectionSort(int arr[], int n){
   for(int pos=0; pos<=n-2; pos++){
       int min_pos = pos;
       for(int j=pos; j<n; j++){
           if(arr[j]<arr[min_pos]){
               min_pos = j;
           }
       }
       swap(arr[min_pos],arr[pos]);
   }
}

void printArray(int a[], int size){
    for (int i = 0; i < size; i++){
        cout<<a[i]<<endl;
    }
}
int main(){
    int n, a[30];
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    selectionSort(a,n);\
    cout<<"Sorted array is:"<<endl;
    printArray(a,n);
    return 0;
    
}