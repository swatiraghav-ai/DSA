#include<iostream>
#include<vector>
using namespace std;
int searchelement(vector<int>arr , int n ){
    if(n==1) return arr[0];
    if(arr[0] !=arr[1]) return arr[0];
    if(arr[n-1] != arr[n-2]) return arr[n-1];
    int low=1, high=n-2;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] != arr[mid+1] && arr[mid] != arr[mid -1]){
            return arr[mid];

        }
        if((mid % 2==1 && arr[mid-1] == arr[mid]) || (mid % 2 ==0 && arr[mid] == arr[mid+1])){
            low=low+1;
        }
        else 
        high =mid-1;
    }
    return -1;
}
int main (){
    int n ;
    cout<< "enter array size";
    cin >> n;
    vector<int>arr(n);
    cout<< "enter array element ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout<< searchelement(arr, n );
    return 0;
}