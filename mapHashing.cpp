#include <iostream>
#include <map>
using namespace std;
int main (){
    int n ;
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
}
return 0;
}