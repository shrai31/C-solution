#include <iostream>

using namespace std;

void waveForm(int A[][10],int r, int c){
  for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        cin>>A[i][j];
    }
  }
}

void printWaveForm(int A[][10],int r, int c){
   for(int j=0; j<c; j++){
    if(j&1)
    //odd column{
    for(int i=r-1; i>=0; i--){
        cout<<A[i][j]<<" ";
    }
    else{
        for(int i=0; i<r; i++){
            cout<<A[i][j]<<" ";
        }
    }
   }
}


int main()
{
    int A[10][10];
    int r, c;
    cin>>r>>c;
    waveForm(A,r,c);
    printWaveForm(A,r,c);
    return 0;
}
