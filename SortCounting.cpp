#include<iostream>
#include<vector>

using namespace std;

void countingSort(int a[], int n){
    int largest = -1;

    for(int i=0; i<n; i++){
        largest = max(largest, a[i]);
    }

    vector<int> freq(largest+1,0);

    for(int i=0; i<n; i++){
        freq[a[i]]++;
    }

    int j=0;
    for(int i=0; i<=largest; i++){
        while(freq[i]>0){
            a[j] = i;
            freq[i]--;
            j++;
        }
    }
    return;
}

int main(){
    int arr[] = { 23,45,6,3,76,8,12};
    int n = sizeof(arr) / sizeof(int);

    countingSort(arr,n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}