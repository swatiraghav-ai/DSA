//hashing -----pre storing /fetching 
// for hashing arr[10^6] -----inside main function 
// arr[10^7]------globally 
#include<iostream>
using namespace std;
int main (){
/*int n ;
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
*/
string A ;
cout<< "enter string";
cin >> A;
// pre compute
int hash[26]={0};
for (int i=0;i<A.size();i++){
hash[A[i]-'a']++;  //A[i]-'a'---->is used to get the index 
}
int query;
cout << "enetr query";
cin >> query;
while (query--){
    char c ;
    cin >> c;
    //fertch
    cout << hash[c-'a'] <<  endl;    //[c-'a]--->is used to get the index
}

return 0;
}
