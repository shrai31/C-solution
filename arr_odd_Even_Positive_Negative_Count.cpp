#include<iostream>
using namespace std;

int main(){
    int a[20],n,i,k;
    cin>>n;
    for(i=0; i<n; ++i){
        cin>>a[i];
    }
    even()
    // for even and odd print
    for(i=0; i<n; ++i){
    if(a[i]%2==0){
        cout<<"Number is even"<<endl<<a[i]<<endl;
    }
    else
    cout<<"Number is odd"<<endl<<a[i]<<endl;
    }
return 0;
}
