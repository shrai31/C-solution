#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char string[200];
    // cin>>string;
       cin.getline(string,1000); 
    int len=0;
    int h=strlen(string)-1;
    int flag=0;
    
    while(h>len){
        if(string[len++]!=string[h--]){
            flag=1;
            break;
        }
    }
    if(flag){
        cout<<"not palindrome";
    }
    else{
        cout<<"palinedrome";
    }

    return 0;
}