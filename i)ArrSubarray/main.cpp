#include <iostream>

using namespace std;

int main()
{
    int sum=0;
    int maxsum=0;
    int n,i,a[100],j,left ,right;
    cin >> n;
    for(i=0; i<n ; i++){
        cin >> a[i];
    }
    // print all sub array

    for(i=0; i<n ; i++){
        for( j=i; j<n ; j++){
                int sum=0;
            for(int k=i; k<=j ;k++){
                cout<<a[k]<<" ,";
                sum+=a[k];
            }
        if(sum>maxsum){
            maxsum=sum;
            left=i;  // range from where to where
            right=j;
        }
            cout<<endl;
        }
    }
         cout<<left<<right<<endl;
         cout<<maxsum<<endl;

    return 0;
}
