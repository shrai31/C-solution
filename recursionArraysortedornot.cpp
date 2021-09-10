#include<iostream>
#include<vector>
using namespace std;

bool sortedArray(vector<int>arr , int index){
   if(index >= arr.size()){
       return true;
   }
   if(arr[index] < arr[index-1])
   return false;

   return sortedArray(arr, index+1);
}
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    bool answer = sortedArray(a,1);
    if(answer)
    cout<<Sorted array;
    else
    cout<<Unsorted array
    return 0;
}

//T.C - O(n) S.C - O(n)