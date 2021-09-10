#include<iostream>
using namespace std;

int main(){
    int r, c;
    cin>>r>>c;
    for(int i=0; i<r; i++){
        for(int j=c; j>0; j--){
            cout<<"*";
        }
        c--;
        cout<<endl;
    //   for(int i=r; i>=1; i++){
    //       for(int j=0; j<=i; j++){
    //           cout<<"*";
    //       }
    //   }
    }
}