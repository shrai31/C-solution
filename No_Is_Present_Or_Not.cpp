#include<iostream>
using namespace std;

int main(){
    int a[20],n,k;
    cin>>n;
    cout<<"Enter the numbers"<<endl;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<"Enter the number to search"<<endl;
    cin>>k;
    

    int i = 0;
    while (i < n)
    {
        if (a[i] == k) {
            break;
        }
        i++;
    }
 
    if (i < n)
    {
        cout << "Element " << k << " is present at index " << i
             << " in the given array";
    }
    else {
        cout << "Element is not present in the given array";
    }
//     for(int i=0; i<n; i++){
//     if(a[i]==k){
//         cout<<"Number present at the "<<i+1<<"position"<<endl;
//     }
//     else
//     cout<<"Number is not present"<<endl;
// }
 
    return 0;
}


//Find algo and Find_if

// #include <iostream>
// #include <algorithm>
// using namespace std;
 
// int main()
// {
//     int arr[] = { 6, 3, 5, 2, 8 };
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int elem = 2;
 
//     auto itr = find(arr, arr + n, elem);
 
//     if (itr != end(arr))
//     {
//         cout << "Element " << elem << " is present at index "
//              << distance(arr, itr) << " in the given array";
//     }
//     else {
//         cout << "Element is not present in the given array";
//     }
 
//     return 0;
// }



// #include <iostream>
// #include <algorithm>
// using namespace std;
 
// struct comp
// {
//     int elem;
//     comp(int const &i): elem(i) {}
 
//     bool operator()(int const &i) {
//         return (i == elem);
//     }
// };
 
// int main()
// {
//     int arr[] = { 6, 3, 5, 2, 8 };
//     int n = sizeof(arr)/sizeof(arr[0]);
 
//     int elem = 2;
 
//     auto itr = find_if(arr, arr + n, comp(elem));
 
//     if (itr != end(arr))
//     {
//         cout << "Element " << elem << " is present at index "
//              << distance(arr, itr) << " in the given array";
//     }
//     else {
//         cout << "Element is not present in the given array";
//     }
 
//     return 0;
// }




