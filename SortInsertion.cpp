#include<iostream>

using namespace std;

void insertionSort(int arr[], int n){
   for(int i=1; i<=n-1; i++){
       int current = arr[i];
       int prev = i-1;

       while(prev>=0 and arr[prev]>current){
           arr[prev+1] = arr[prev];
           prev = prev -1;
       }
       arr[prev+1] = current;
   }
}

void printArray(int arr[], int n){
    for(int j=0; j<n; j++){
        cout<<arr[j]<< " "; 
        cout << endl; 
    }
}
int main(){
  int arr[20], n;
  cin>>n;

  for(int i=0; i<n; i++){
      cin>>arr[i];
  }    
  insertionSort(arr,n);
  cout<<"sorted array is:";
  printArray(arr,n);
  return 0;
}