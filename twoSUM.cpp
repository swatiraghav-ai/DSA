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
    int target;
    cout<<"enter target value";
    cin >> target;
    sort(arr , arr+n);
    int i=0,j=n-1;
    while(i<j){
        int sum =arr[i]+arr[j];
        if(sum==target){
            cout<<"yes";
            return 0;
        }
        else if (sum <target){
            i++;
        }
        else{
            j--;
        }
    }
    cout <<"no";

    return 0;
}