#include<iostream>
using namespace std;

int recFact(int num){
    if(num<=1)
    return 1;
    return num*recFact(num-1);
    // int x= num*recFact(num-1);
    // return x;
}
int main(){
    int n;
    cin>>n;
    recFact(n);
    cout<<recFact(n);
}

// TC: O(n) i.e, T(n-1);
// SC:  As there is no extra space taken during the recursive calls,the space complexity is O(N).