#include <iostream>

using namespace std;

void matrix(int arr[][10] , int r ,int c){
   for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        cin>>arr[i][j];
    }
   }}

void printmatrix(int arr[][10],int r,int c){
   for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        cout<<arr[i][j]<<" " ;
    }
    cout<<endl;
   }
}
int main()
{
    int arr[10][10];
    int r,c;
    cin>>r>>c;
    matrix(arr,r,c);
    printmatrix(arr,r,c);
    cout << "Hello world!" << endl;
    return 0;
}
