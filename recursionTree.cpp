//Tree Recursion: if a recursive function calling itself for more than one time then it’s known as Tree Recursion
#include<iostream>
using namespace std;

void treeFun(int x){
    if(x>0){
    cout<<x<<endl;
    treeFun(x-1);
    treeFun(x-1);
    }
}
int main(){
     int n;
     cin>>n;
     treeFun(n);
}

// Time Complexity For Tree Recursion: O(2^n)  
// proof: https://www.quora.com/What-is-time-complexity-of-2T-n-1-1
// Space Complexity For Tree Recursion: O(n)