#include <iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cout<<"enter array size";
    cin>>n;
    int arr[n];
    cout<<"enter array element";
    for (int i=0;i<n;i++){
         cin>>arr[i];
    }
    int prefix=1;
    int suffix =1;
 int ans = INT_MIN;
 for (int i=0;i<n;i++){
    if(prefix ==0) prefix=1;
    if(suffix==0) suffix=1;
    prefix = prefix * arr[i];
    suffix = suffix * arr[n-i-1];
    ans= max (ans,max(prefix,suffix));
 }
 cout <<  ans << endl;
    return 0 ;
}