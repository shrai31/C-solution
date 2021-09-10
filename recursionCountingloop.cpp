// the time complexity is same in both iterative and tail recursion which is O(n);
// better write the code in loop or iterated version because the space complexity is O(1)
// the complexity is O(1) because it's based on  how the data stored in main memory during execution of a program.
// heap=dynamic memory allocation of variable;
// stack= all fucntion stored here
// local vairable=
// code section

// Remember that the program can directly access only the stack memory ,
// it can’t directly access the heap memory so we need the help of pointer to access the heap memory.

// Let’s now understand why space complexity is less in case of loop ?
// In case of loop when function “(void recuCountLoop(int y))” 
// executes there only one activation record created in stack memory(activation record created for 
// only ‘y’ variable) so it takes only ‘one’ unit of memory inside stack so it’s space complexity is O(1)
// but in case of recursive function every time it calls itself for each call a separate activation record created in stack.
// So if there’s ‘n’ no of call then it takes ‘n’ unit of memory inside stack so it’s space complexity is O(n). 
#include<iostream>
using namespace std;

void recuCountLoop(int y){
    while(y>0){
        cout<<y<<endl;
        y--;
    }
}
int main(){
    int n;
    cin>>n;
    recuCountLoop(n);
    return 0;
}