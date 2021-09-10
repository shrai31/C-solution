#include<iostream>
using namespace std;

int main(){
    int r,c;
    cout<<"Row ";
    cin>>r;
    cout<<"Column ";
    cin>>c;

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(j==0 || j==c-1 || i==0 || i==r-1) {
                cout<<"*";
            }
            else cout<<" ";
        }
            cout<<endl;
    }
}