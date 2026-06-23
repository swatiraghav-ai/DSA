#include<iostream>
#include<vector>

using namespace std;
int binarysearch(vector<int>arr,int low,int high,int target){
   
    if(low > high){
        return -1;
    }
     int mid=(low+high)/2;
    if(target==arr[mid]){
        cout<< mid;
    }
    else if (target>arr[mid]){
    return binarysearch(arr,mid+1,high, target);
    }
    else
    return binarysearch(arr,low,mid-1,target);
}
int main(){
    int n;
    cout<< "enter array size";
    cin >> n;

    vector<int> arr(n);
cout << "enter array element";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int target;
    cout<< "enter target";
    cin >> target;
 int ans =binarysearch(arr, 0,n-1,target);
cout <<ans;
return 0;
}