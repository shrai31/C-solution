#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int elem){
    int start = 0, end = n-1;

    while(start <= end ){
    int mid = (start+end)/2;
        if(arr[mid] == elem){
              return mid;        }
        else if(arr[mid] > elem){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return -1;
}
int main(){
    int n, key, a[100];
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cin>>key;
    int index = binarySearch(a, n, key);
         if(index !=1){
        cout<<a[index-1] << " Element is present at index of "<<index-1333<<endl;
       
    }
    else {
        cout<<"Element is not found";
    }
    return 0;
}