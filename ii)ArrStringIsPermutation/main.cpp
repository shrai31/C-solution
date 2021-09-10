#include <iostream>
#include <cstring>
using namespace std;

bool isPermutation(char *s1 , char *s2){
    int x = strlen(s1);
    int y = strlen(s2);
    if(x!=y){
            return false;

        }
           int freq[26]={0}; // beacuse a to z is 26 leter
        for(int i=0; i<x; i++){
            freq[s1[i]-'a']++; //implicit change to int means char + char give int. similarly char - char give int
        }
        for (int i=0; i<y; i++){
            freq[s2[i]-'a']--;
        }
        for(int i =0 ; i<26; i++){
            if(freq[i]!=0){
                return false;
            }
    }
    return true;
    }

int main(){
    char s1[100],s2[100];
    cin>>s1>>s2;
    if(isPermutation(s1,s2)){
        cout<<"Yes permutaion";
    }
    else{
        cout<<"Not Permutation";
    }
    return 0;
}
