// Time complexity and space complexity is O(n)
// Tail recursion when recursive function call in it's end;
// Head recurison when If a recursive function calling itself and 
// that recursive call is the first statement in the function then it’s known as Head Recursion

#include <iostream>
using namespace std;

void getCount(int x)
{
    if (x <= 0)
        return ;
        // Head recursion
        //  getCount(x-1);
        cout<<x<<endl;
        // tail recursion
    getCount(x-1);
}
int main()
{
    int n;
    cin >> n;
    getCount(n);
    return 0;
}

