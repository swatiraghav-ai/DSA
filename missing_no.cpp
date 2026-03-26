// Kth positive int missing number
#include <iostream>
using namespace std ;
int main (){
    int n ;
    cout << "enter size of an array";
    cin >> n;
    int arr[n];
    cout << "enter array element ";
    for (int i =0 ; i < n; i++){
       cin >> arr[i];
    }
int x ;
cout << " enter target element ";
cin >> x ;

for (int i=0;i<n;i++){
int start =1;
if(start!=arr[i]){
    cout << start << endl;
    break;
}
else{
    start ++;
    
}
}
return 0;
}