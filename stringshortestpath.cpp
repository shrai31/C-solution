#include<iostream>
using namespace std;

int main(){
    char ch[1000];
    cin.getline(ch,1000);
    
    int x=0;
    int y=0;

    for(int i=0; ch[i]!='\0'; i++){
         switch(ch[i]){
             case 'N': y++;
                       break;
             case 'S': y--;
                       break;
             case 'E': x++;
                       break;
             case 'W': x--;
                       break;
         }
    }
    cout<<"Final x and y is"<<x<<" "<<y<<".";

    if(x>=0 & y>=0){
        while(y--){
            cout<<"N";
        }
        while(x--){
            cout<<"E";
        }
    }

     if(x<=0 & y>=0){
        while(y--){
            cout<<"S";
        }
        while(x++){
            cout<<"E";
        }
    }
}