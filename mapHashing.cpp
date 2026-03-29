#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main (){
    /*int n ;
    cout << "enter size of an array ";
    cin >> n;
int arr[n] ;
cout << "enter array element ";
for (int i=0;i<n;i++){
    cin>> arr[i];
// pre compute 
map<int ,int> mpp;
for (int i=0;i<n;i++){
    mpp[arr[i]]++;
}
   int query;
    cout <<"enter query";
    while(query--){
        for (int i=0;i<query;i++){
            int num ;
            cin >> num;
            //fetch 
            cout <<mpp[num]<< endl;
        }
    }
}*/
int n ;
cout << "enter array  size ";
cin >> n;
int arr[n];
cout << "enter array element ";
for (int i=0;i<n;i++){
cin >> arr[i];
}
//pre computr 
map<int , int >mpp;
for (int i=0;i<n;i++){
    mpp[arr[i]]++;
}
int max_freq=0;
int min_freq=1e9;
for(auto it :mpp){
max_freq=max(max_freq,it.second);
min_freq=min(min_freq,it.second);
    cout<< it.first<<"--->"<< it.second  << endl;
}
cout << max_freq<<" "<< min_freq<<endl;

int q ;
cout <<" enter query number";
cin >> q;
while (q--){
    for (int i =0;i<q;i++){
        int num ;
        cin >> num;
        //fetch
        cout<<mpp[num]<<endl;
        
    }
}

return 0;
}