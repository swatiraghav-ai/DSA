#include<iostream>
using namespace std;
int main() {
int n ;
cout << "enter size of array";
cin >> n;
int arr[n];
cout << "enter array element ";
for(int i=0;i<n;i++){
cin >> arr[i];
}
int target ;
cout<< "enter target";
cin >> target;
int low =0, high=n-1;
 int mid= (low+high)/2;
while(low<=high){
    if(arr[mid]==target){
        cout << mid;
        break;
    }
    else if (arr[mid]<target){
        low=mid+1;
    }
    else 
    high=mid-1;
}
return -1;
}