#include<iostream>
#include<vector>
using namespace std;
int lowerBound(vector<int>arr, int n, int x){
    int low=0,high=n-1;
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>x){
        ans= mid;
         high=mid-1;
        }
        else
        low=mid+1;
    }
    return ans;
}
int main(){
int n ;
cout<<"enter array size";
cin >> n;

vector<int>arr(n);
cout<< "enter array element";
for(int i=0;i<n;i++){
    cin>> arr[i];
}
int x;
cout<< "enter x";
cin >> x;
int output = lowerBound(arr,n,x);
cout<< output;
    return 0;
}
