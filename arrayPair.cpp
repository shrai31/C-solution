#include<iostream>
using namespace std;

void printPairs(int arr[], int n){
     for(int i=0; i<n; i++){
         int y =arr[i];
          for(int j=i+1; j<n; j++){
              int z = arr[j];
            cout<<y<<" "<<z <<endl;
          }
          cout<<endl;
    }
}
int main(){
    int arr[]={10,20,30,40,50,60};
    int n=sizeof(arr)/sizeof(int);
    // for(int i : arr){
    //     cout<<i<<endl;
    // }
    printPairs(arr,n);
    return 0;
}