#include <iostream>
using namespace std;

void swap(int *arr4, int *arr5){
    int temp;
    temp = *arr4;
    *arr4 = *arr5;
    *arr5 = temp;
    
}

void sortArray(int Arr1[], int Arr2[],int n, int m){
    int Arr3[n+m];

   
    for(int i=0; i<n; i++){
        Arr3[i]=Arr1[i];
    }
    for(int i=0; i<n+m; i++){
        Arr3[i+n]=Arr2[i];
    }
    
     cout<<"Enter the value of Arr3"<<endl;
    for(int i=0; i<n+m; i++){
    cout << Arr3[i]<<endl;
    } 
    
    for(int i=0; i<((n+m)-1); i++){
       int min_idx = i;
		for (int j = i+1; j < n; j++)
		if (Arr3[j] < Arr3[min_idx])
			min_idx = j;

		// Swap the found minimum element with the first element
		swap(&Arr3[min_idx], &Arr3[i]);
       
    }

    cout<<"Enter the value of Arr3"<<endl;
    for(int i=0; i<n+m; i++){
    cout << Arr3[i]<<endl;
    }
}
int main()
{
  int Arr1[10], Arr2[10];
  int n,m;

  cout<<"Enter the size of Arr1 & Arr2"<<endl;
  cin>>n>>m;

  cout<<"Enter the value of Arr1 "<<endl;
  for(int i=0; i<n; i++){
      cin>>Arr1[i];
  }
  cout<<"Enter the value of Arr2"<<endl;
  for(int i=0; i<m; i++){
      cin>>Arr2[i];
  }

  sortArray(Arr1,Arr2,n,m);

  return 0;  
} 