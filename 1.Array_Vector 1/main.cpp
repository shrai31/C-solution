#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //Vector dynamic of array and double in size

    vector <int> arr = {1,3,5,7};

    //Pop_back: remove element from last
    arr.pop_back();

    //Push_back(9): add element in last

    arr.push_back(9);
    cout <<"abc"<<arr.capacity() <<endl;  // answer is 8 when comment the pop element
    // some method insert , erase

    //fill constructor: 10 element with 7
    // this initialize is called as initialize with fill constructor
//    vector<int> arr (10,7);
//
//    vector<int> visited(100,0);

//    for(int i=0; i<arr.size(); i++){
//        cout <<arr[i] <<endl;
//    }

   for (int x : arr){
    cout << x <<"," ;
   }
    cout <<arr.size() <<endl;

    return 0;
}
