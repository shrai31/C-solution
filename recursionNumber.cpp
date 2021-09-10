#include <iostream>
#include <string>
using namespace std;

int recurNum(int arr, string st[]){
      if(arr==0)
      return 0;
      
     recurNum(int (arr/10), st);
     cout<<st[arr%10]<<" ";
}
int main(){
    int n;
    cin>>n;
    string str[10]={"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    recurNum(n, str);
    return 0;
}


// T.C - O(length of number)
// S.C - O(length of number )