#include<iostream>
using namespace std;

int main(){
    int r,j,i;
    cin>>r;
    for(i=1;i<=r;i++)
  {
    for(j=1;j<=i;j++)
    cout<<"*";
    for(j=1;j<=2*(r-i);j++)
    cout<<" ";
    for(j=1;j<=i;j++)
    cout<<"*";
    cout<<"\n";
  }

    for(int i=r; i>=1; i--){
        for(int j=1; j<=i; j++){
          cout<<"*";
        }
        int space=2*r-2*i;
        for(int j=1; j<=space; j++){
          cout<<" ";
        }
        for(int j=1; j<=i; j++){
          cout<< "*";
        }
        cout<<endl;     
    }
    return 0;
}