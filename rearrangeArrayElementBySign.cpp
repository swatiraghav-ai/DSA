#include <iostream>
#include<vector>
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
    vector<int>ans(n);
    int positiveindex=0,negativeindex=1;
    for (int i=0;i<n;i++){
        if(arr[i]<0){
ans[negativeindex]=arr[i];
negativeindex +=2;
        }
        else{
            ans[positiveindex]=arr[i];
            positiveindex +=2;
        }
    }
    for (int i=0;i<n;i++){
        cout << ans[i] <<" ";
    }
    return 0;
}
