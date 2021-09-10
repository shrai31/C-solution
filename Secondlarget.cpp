#include<iostream>
using namespace std;

int main(){
    int n, lar=0, secl=0, a[20];
    cin>>n;
    cout<<"Enter element"<<endl;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=0; i<n; i++){
        if(lar<a[i]){
            secl=lar;
            lar=a[i];
        }
        
        if(lar>a[i] && a[i]>secl){
            secl=a[i];
        }
    }
    cout<<"second larget element is:"<<secl;
    cout<<"larget element is:"<<lar;

}