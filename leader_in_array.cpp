#include <iostream>
#include<vector>
#include<algorithm>
#include<climits>
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
vector<int>ans;
    int maxi =INT_MIN;
for (int i=n-1;i>=0;i--){
    if (arr[i] >maxi){
        ans.push_back(arr[i]);

    }
maxi=max(maxi,arr[i]);
}
for(int i=0;i<ans.size();i++){
    cout <<ans[i] << "  ";

}
    
    return 0;
}