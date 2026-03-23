//  first and last position of an element in an array 
#include <iostream>
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
   int target ;
 cout << "enter target";
 cin >> target;

  int start =0, end = n-1 , first=-1, last =-1, mid ;
    while(start<= end){
        mid = start + (end-start)/2;
        if(arr[mid]==target){
            first= mid;
            end = mid -1;
        }
         else  if(arr[mid] < target){
            start = mid +1;
         }
         else 
         end = mid -1;
    } 
    cout << "first position " <<first<<endl;
    cout << "last position " << last<<endl;
    return 0 ;
}