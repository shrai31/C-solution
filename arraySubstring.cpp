#include<iostream>
using namespace std;

void arraySubstring(int arr[], int x){
    for(int i=0; i<x; i++){
        for(int j=i; j<x; j++){
            // cout << "("<<i << "," <<j<<")"<<endl;
            for(int k=i; k<=j; k++){
                cout<<arr[k]<< ",";
            }
            cout<<endl;
        }
    }
}
int main(){
    int arr[]={10,20,30,40,50,60};
    int n= sizeof(arr)/sizeof(int);

    arraySubstring(arr,n);

    return 0;
}

// T.C is O(n^3) three loops continues so