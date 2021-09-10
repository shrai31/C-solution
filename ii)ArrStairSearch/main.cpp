#include <iostream>

using namespace std;
void matrix(int arr[][10] , int r ,int c){
   for(int i=0; i<r; i++){
    for(int j=0; j<c; j++){
        cin>>arr[i][j];
    }
   }}
void StairSearch(int arr[10][10], int r , int c ,int k){
   int i=0 , j=c-1;
   while(i>r && j>=0){
    if(arr[i][j]==k){
        cout<<"Element found"<<endl;
        return;
    }
    else if(arr[i][j]>k){
        j--;
    }
    else{
        i++;
    }
   }
  cout<<"Element not found";
  return;
}
int main()
{
    int R,C;
    int a[10][10];
    int key;
    cout<<"Enter Row AND column:"<<endl;
    cin>>R>>C;
    matrix(a,R,C);
    cout<<"Enter Element want to search";
    cin>>key;
    StairSearch(a,R,C,key);
    cout << "Hello world!" << endl;
    return 0;
}
