#include<iostream>
using namespace std;

int KadaneSum(int arr[], int x){
    int cumulativeSum = 0;
    int largestSum = 0;
    for(int i=0; i<x; i++){
       cumulativeSum += arr[i];
       if(cumulativeSum<0){
           cumulativeSum = 0;
       }
       largestSum = max(largestSum,cumulativeSum);
    }
    return largestSum;
}

int main(){
    int arr[]={-10,20,30,-40,50,-60};
    int n= sizeof(arr)/sizeof(int);

    cout<<KadaneSum(arr,n);

    return 0;
}

// T.C is O(n^3) three loops continues so