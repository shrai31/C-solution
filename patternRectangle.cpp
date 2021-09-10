#include<iostream>
using namespace std;

int main(){
    int  r, c;
    cout<<"Row";
    cin>>r;
    cout<<"Column";
    cin>>c;

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<"*";
        }
        cout<<endl;
    
    }
}