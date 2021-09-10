#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // 2D_Vector: replacement of 2D array can different size
    vector < vector<int> > arr ={
    {1,3,4},
    {2,4,6},
    {5,10,20,10}

    };
//    for modified the vector array
    arr[0][0] += 10;

    for(int i=0; i< arr.size(); i++){
        for (int x : arr[i]){
            cout << x << ",";
        }
        cout <<endl;
    } //give the rows
    cout << "Hello world!" << endl;
    return 0;
}
