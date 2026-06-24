#include<iostream>
using namespace std;
#include<vector>
bool SearchElement(vector<int>arr,int n , int target){
    int low=0, high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target)
            return true;
            if(arr[low]==arr[mid] && arr[mid]==arr[high]){
                low=low+1;
                high=high-1;
                continue;
            }
        
        if(arr[low]<=arr[mid]){
            if(arr[low]<=target && target <=arr[mid]){
            high=mid-1;
            }
            else 
            low=mid+1;
        }
        else
        if(arr[mid]<=target && target<=arr[high]){
            low=mid+1;
        }
        else 
        high=mid-1;
    }
    return false;
}
int main (){
    int n;
    cout<< "enter array size";
    cin>>n;
    vector<int>arr(n);
    cout<<"enter array element";
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    int target;
    cout << "enter target";
    cin >> target;
    bool ans = SearchElement(arr, n , target);
    cout<< ans;
    return 0;
}