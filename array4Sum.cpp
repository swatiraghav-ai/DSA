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
 int target;
 cout << "enyer target";
 cin >> target;
 vector<vector<int>>ans;
 sort(arr,arr+n);
 for(int i=0;i<n;i++){
    if(i>0 && arr[i]==arr[i-1]) continue;
    int j=i+1;
    int k=n-1;
    int l=j+1;
    while(l<k){
    int sum =arr[i]+arr[j]+arr[k]+arr[l];
    if(sum <target){
j++;
    }
    else if (sum >target){
        k--;
    }
    else{
        vector <int>temp= {arr[i],arr[j],arr[k],arr[l]};
    
        ans.push_back(temp);
        j++;
        l++;
        k--;
    
    while(l<k && arr[j] ==arr[j+1]) j++;
    while(l<k && arr[k]==arr[k-1]) k--;
    while(l<k && arr[l]== arr[l+1]) l++;
    }
    }
}
    for (auto v:ans){
        for(auto x :v){
            cout << x << " ";
        }
        cout <<endl;
    }
return 0;
 }
