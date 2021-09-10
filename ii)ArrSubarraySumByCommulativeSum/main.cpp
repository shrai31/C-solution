#include <iostream>

using namespace std;

int main()
{
    //subarraySum using the cummulative sum
    int i , j, k , n , left , right ;
    int cumSum[100]={0},a[100];
    int maxSum=0,currentSum=0;

    cin>>n;
    cout<<"First Value of array"<<endl;
    cin>>a[0];
   cumSum= a[0];

    for(i=1; i<n; i++){
       cumSum[i]=cumSum[i-1]+a[i];
    }

    for(int i=0 ;i<n; i++){
        for( j=i; j<n; j++){
           currentSum=0;
           currentSum= cumSum[j]-cumSu[i-1];

           if(currentSum> maxSum){
            maxSum=currentSum;
            left=i;
            right=j;
           }
        }
    }
    cout<<"Sum is  " <<maxsum<<endl;
    for(int k=left ; k<=right ;k++){
        cout<<a[k]<<",";
    }
    return 0;
}
