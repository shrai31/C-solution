#include<iostream>
using namespace std;

int main(){
    int r;
    cin>>r;
    
    for(int i=1; i<=r; i++){
        for(int j=i; j<=r; j++){
            for(int k=r; k>=j; k--){
                cout<<" ";
            }
            cout<<"*";
        }
            cout<<endl;
    }
}