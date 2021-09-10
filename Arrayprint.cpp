#include<iostream>
using namespace std;

int main(){
    int a[10];
    int n;
    cin>>n;
    cout<<"Enter the number"<<endl;
    
    for(int i=0; i<n; i++){
      cin>>a[i];
    }
    cout<<"Enter Numbers are"<<endl;
    for(int i=0; i<n; i++){
    cout<<a[i]<<endl;
    }
    return 0;
}