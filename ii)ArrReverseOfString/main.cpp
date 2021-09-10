#include <iostream>
#include <cstring>
using namespace std;

//string reverse(string str){
//    int n=str.length();
//        for (int i = 0; i < n/2; i++)
//		swap(str[i], str[n - i - 1]);
//    cout<<str<<endl;
//    }
//int main()
//{
////    char a[]={'x','c','b'};
////    cout<<a;
//     string a;
//     getline(cin,a);
//     cout<<a<<endl;
//     reverse(a);
//
//    return 0;
//}

string reverse(string str){
    int n=str.length();
        for (int i = 0; i < n/2; i++)
		swap(str[i], str[n - i - 1]);
    cout<<str<<endl;
    }
int main()
{
//    char a[]={'x','c','b'};
//    cout<<a;
     string a;
     getline(cin,a);
    int n=a.length();
     string rev;
     for(int i=n-1;i>=0;i--)
     rev.push_back(a[i]);
     cout<<rev<<endl;
//     reverse(a);

    return 0;
}
