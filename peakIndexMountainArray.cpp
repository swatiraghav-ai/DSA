#include <iostream>
using namespace std;
int main (){
    int n ;
    cout << "enter the size of an array ";
    cin >> n;
    int arr[n];
    cout << "enter the element ";
    for(int i =0 ; i<n;i++){
        cin >> arr[i];
    }
    int x ;
    cout << "enter peak element ";
    cin >> x;
    int start=0, end =n-1, mid ;
mid = end + (start-end)/2;
    while (start<=end){
        if (arr[mid] >arr[mid+1] && arr[mid]>arr[mid-1]){
            return mid;
            
        }
        else if (arr[mid]>arr[mid-1]){
            end= mid +1;
        }
        else{
            start = mid -1;
        }

    }
    return -1;

}