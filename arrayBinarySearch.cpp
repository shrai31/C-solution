#include<iostream>
using namespace std;

int binarySearch(int arr[], int ele, int n){
      int s = 0;
      int e = n-1;

      while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid] == ele){
            return mid;
        }
        else if(arr[mid] > ele){
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
      }
      return -1;
}
int main(){
    int n,key;
    cin>>n;
    int a[100];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<"Element want to search"<<endl;
    cin>>key;
    int index = binarySearch(a,key,n);
    // cout<<"element is at"<<
    if(index!=1){
        cout<<key << " Element is present at index of "<<index<<endl;
    }
    else {
        cout<<"Element is not found";
    }
    return 0;
}




// T.C = Log(n)
// Calculating Time complexity:
// At each iteration, the array is divided by half. So let’s say the length of array at any iteration is n
// At Iteration 1,
// Length of array = n
// At Iteration 2,
// Length of array = n⁄2
// At Iteration 3,
// Length of array = (n⁄2)⁄2 = n⁄22
// Therefore, after Iteration k,
// Length of array = n⁄2k
// Also, we know that after
// After k divisions, the length of array becomes 1
// Therefore
// Length of array = n⁄2k = 1
// => n = 2k
// Applying log function on both sides:
// => log2 (n) = log2 (2k)
// => log2 (n) = k log2 (2)
// As (loga (a) = 1)
// Therefore,
// => k = log2 (n)
// Hence, the time complexity of Binary Search is

// log2 (n)