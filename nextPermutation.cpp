#include <iostream>
#include<algorithm>
using namespace std;
int main (){
    int n;
    cout << "enter array size: ";
    cin >> n;
    int arr[n];
    cout << "enter array element ";
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }

    int index =-1;
    for(int i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            index=arr[i];
            break;
        }
        
    }
    if(index==-1){
        reverse(arr,arr+n);
        return 0;
    }
    for (int i=n-1;i>=0;i--){
        if(arr[i]>arr[index]){
            swap(arr[i],arr[index]);
            break;
        }
    }
    reverse(arr + index+1,arr+n);
    for (int i=0;i<n;i++){
        cout<< arr[i] <<" ";
    }
    return 0;
}