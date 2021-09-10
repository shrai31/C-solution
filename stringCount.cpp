#include<iostream>
using namespace std;

int main(){
    // char ch;
    // ch = cin.get();

    // int digit=0, alphabet=0, space=0;

    // while(ch!='\n'){
    //     if(ch>='0' and ch<='9'){
    //         digit++;
    //     }
    //     else if(ch>='a' & ch<='z' or ch>='A' & ch<='Z'){
    //         alphabet++;
    //     }
    //     else if(ch==' ' or ch=='\t'){
    //         space++;
    //     }

    //     ch = cin.get();
    // }

    // cout<<"Total Alphabet"<<alphabet<<endl;
    // cout<<"Total space"<<space<<endl;
    // cout<<"Total digits"<<digit<<endl;

    char paragraph[1000];
    cin.getline(paragraph,1000,'.');
    cout << paragraph <<endl;
    return 0;
}