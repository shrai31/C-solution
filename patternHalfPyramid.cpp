#include<iostream>
using namespace std;

int main(){
    int r;
    cin>>r;

    for(int i=0; i<r; i++){
        for(int j=0; j<r; j++){
            if(j<r-i){
                cout<<" ";
            }
            else cout<<"*";
        }
        // cout<<"*";
        cout<<endl;
    }
}