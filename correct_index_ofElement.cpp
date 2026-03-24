//  find the correct index of an element in an array 
#include <iostream>
using namespace std ;
int main () {
    int n ;
    cout << "enter size of an array";
    cin >> n;
    int arr[n];
    cout << "enter array element ";
    for (int i =0 ; i < n; i++){
       cin >> arr[i];
    }
int target ;
cout << " enter target element ";
cin >> target ;
int start =0 , end = n-1, mid , index ;
index = n;
while (start <= end){
mid = start + (end-start)/2; 
if (arr[mid]==target){
    index = mid;
    break;
}
else if (arr[mid]< target){
    start = mid +1;
}
else {
index = mid ;
end = mid -1;
}
}
cout << index << endl;
    return index; 
}
