// Nested Recursion: In this recursion, a recursive function will pass the parameter as a recursive call.
// That means “recursion inside recursion”. 

#include<iostream>
using namespace std;

int nestedRecur(int n){
     if (n > 100)
        return n - 10;
 
    // A recursive function passing parameter
    // as a recursive call or recursion
    // inside the recursion
    return nestedRecur(nestedRecur(n + 11));
}
int main(){
    int n;
    cin>>n;
    int r= nestedRecur(n);
    cout<< r;
    return 0;
}