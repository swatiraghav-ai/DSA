#include <iostream>
#include <vector>
#include<algorithm>
using namespace std ;
int main (){ 
    int n ;
 cout<< "enter array size";
 cin >> n;
 int arr[n];
 cout<< "enter elements";
 for(int i =0;i<n;i++){
    cin>>arr[i];
 }
vector<vector<int>>ans;
sort(arr,arr +n);
for(int i=0;i<n;i++){
    if(i>0 && arr[i]==arr[i-1]) continue;
    int j=i+1;
    int k=n-1;
    while(j<k){
        int sum =arr[i]+arr[j]+arr[k];
        if(sum<0){
            j++;
        }
        else if (sum >0){
            k--;
        }
        else{
            vector<int> temp={arr[i],arr[j],arr[k]};
            ans.push_back(temp);
            j++;
            k--;
            while(j<k && arr[j]==arr[j-1]) j++;
            while(j <k && arr[k]==arr[k+1]) k--;
        }
    }
}
for (int i=0;i<ans.size();i++){
    cout<< "[";
    for(int j=0;j<ans[i].size();j++){
        cout << ans[i][j] <<" ";
    }
    cout << "]";
}
return 0;
}