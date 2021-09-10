#include<iostream>
using namespace std;

//T.C t(n-1) so O(n)
// int exponential(int x, int y){
//     if(y==0)
//     return 1;
//     return x*exponential(x,y-1);
// }
int exponential(int x,int n) {
    if(n==0){
        return 1;
    }
    //odd
    else if(n&1){
        int p = exponential(x, (n-1)/2);
        return x * p * p;
    }
    //even
    else {
        int p = exponential(x, n/2);
        return p * p;
    }
}
//         / t((n-1)/2) + d if n is odd  (d is constant cost)
// t(n) = <
//         \ t(n/2) + d     if n is even (d is constant cost)

// t(n) = O(log n) (also for "Binary Search").
// https://www.youtube.com/watch?v=8gt0D0IqU5w

int main(){
    int n,m;
    cin>>n>>m;
    
    cout<<exponential(n,m);
}
