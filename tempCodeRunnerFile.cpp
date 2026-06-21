#include <iostream>
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
    mergeSort(arr, 0, n - 1);
cout <<cnt;

    return 0;
}