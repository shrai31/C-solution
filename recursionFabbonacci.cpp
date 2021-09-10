#include<iostream>
using namespace std;

int fabbonacci(int num){
   if(num==0||num==1)
    return num;

    return fabbonacci(num-1)+fabbonacci(num-2);
}
int main(){
    int n, i=0;
    cin>>n;
    while(i <= n) {
      cout << " " << fabbonacci(i);
      i++;
   }
    return 0;
}

// Time Complexity:
// The complexity is related to input-size, where each call produce a binary-tree of calls

// Where T(n) make 2n calls in total ..

// T(n) = T(n-1) + T(n-2) + C

// T(n) = O(2n-1) + O(2n-2) + O(1)

// O(2^n)

// In the same fashion, you can generalize your recursive function, as a Fibonacci number

// T(n) = F(n) + ( C * 2n)

// Next you can use a direct formula instead of recursive way

// Using a complex method known as Binet's Formula


// Time complexity is O(n)
// T(n) = T(n-1) + 3   (3 is for As we have to do three constant operations like 
//                  multiplication,subtraction and checking the value of n in each recursive 
//                  call)

//      = T(n-2) + 6  (Second recursive call)
//      = T(n-3) + 9  (Third recursive call)
//      .
//      .
//      .
//      .
//      = T(n-k) + 3k
//      till, k = n

//      Then,

//      = T(n-n) + 3n
//      = T(0) + 3n
//      = 1 + 
//      O(n)

// Space Complexity:space complexity = number of function calls * number of variables per call
//  As there is no extra space taken during the recursive calls,the space complexity is O(N).



// A tail recursive function to
// calculate n th fibonacci number
// int fib(int n, int a = 0, int b = 1)
// {
//     if (n == 0)
//         return a;
//     if (n == 1)
//         return b;
//     return fib(n - 1, b, a + b);
// }
 
// // Driver Code
// int main()
// {
//     int n = 9;
//     cout << "fib(" << n << ") = "
//          << fib(n) << endl;
//     return 0;
// }


// TC: O(n)
// SC:O(n)