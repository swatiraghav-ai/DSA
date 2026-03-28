//hashing -----pre storing /fetching

#include<iostream>
using namespace std;
int main (){
int n ;
cout<<"enter array element";
cin >>n;
int arr[n];
for (int i=0;i<n;i++){
    cin >> arr[i];
}
//precompute
int hash[13]={0};
for (int i =0;i<n;i++){
    hash[arr[i]] +=1;
}
int query;
cout <<"enter query ";
cin >> query;
while (query--){
    int num;
    cin >> num;
//    fetch 
cout <<hash[num] <<endl;
}
return 0;
}