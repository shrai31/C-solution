#include <iostream>

using namespace std;

void substring(char *x){
   for(int i=0; x[i]!='\0'; i++){
    for(int j=i; x[j]!='\0'; j++){
            cout<<"{"<<i<<","<<j<<"}";
        for(int k=i; k<=j; k++){
             cout<<x[k];
        }
        cout<<endl;
    }
    cout<<endl;
   }
}

int main()
{
    char s[6]="Hello";
    substring(s);
    return 0;
}
