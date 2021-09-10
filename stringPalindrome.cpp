#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char string1[20];
    int i, length;
    int flag = 0;
    
    cout << "Enter a string: "; 
    cin >> string1;
    
    length = strlen(string1);
    
    for(i=0;i < length ;i++){
        if(string1[i] != string1[length-i-1]){
            flag = 1;
            break;
   }
} 
    if (flag) {
        cout << string1 << " is not a palindrome" << endl; 
    }    
    else {
        cout << string1 << " is a palindrome" << endl; 
    }
    system("pause");
    return 0;
}

// #include<iostream> 
// #include<cstring> 
// using namespace std; 
 
// int main(){ 
//     char sentence[1000]; 
//     cin.getline(sentence,1000); 
//     int l = 0; 
//     int h = strlen(sentence) - 1; 
//     // cout<<sentence; 
//     int flag = 0;
 
     
//      while (h > l) 
//     { 
//         if (sentence[l++] != sentence[h--]) 
//         { 
//             flag=1; 
//             break;
//         } 
//     }
//     if(flag==1){
//         cout << sentence <<" is not a palindrome\n ";
//     }
//     else
//         cout << sentence <<" is a palindrome\n "; 
//     return 0; 
// }