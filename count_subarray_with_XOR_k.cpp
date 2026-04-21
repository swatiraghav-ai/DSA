#include <iostream>
#include <map>
#include<algorithm>
using namespace std ;
int main (){ 
    int n ;
 cout<< "enter array size";
 cin >> n;
 int arr[n];
 cout<< "enter elements";
 for(int i =0;i<n;i++){
    cin>>arr[i];
 }
 int target;
 cout << "enyer target";
 cin >> target;
 int xr=0;
 map <int,int>mpp;
 mpp[xr]++;
 int cnt=0;
 for(int i=0;i<n;i++){
    xr=xr^arr[i];
    int x=xr^target;
    cnt+=mpp[x];
    mpp[xr]++;
 }
 cout<< cnt <<endl;
}