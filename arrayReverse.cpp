#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int n){

    int s = 0;
    int e = n-1;

    while(s<e){
        swap(arr[s],arr[e]);
        s+=1;
        e-=1;
    }
}
int main(){
    int n;
    cin>>n;
    int a[100];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    reverseArray(a, n);
    for(int i=0; i<n; i++){
       cout<<a[i]<<endl;
    }
    return 0;
}

// Time complexity is O(n);