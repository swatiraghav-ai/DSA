# include <iostream>
using namespace std;
int main (){
    //largest element in an array
    int n ;
    cout << "enter array size";
    cin >>n;
   int  arr[n];
cout <<"enter array element";
for (int i =0;i<n;i++){
    cin >> arr[i];
}
/*
int largest =0;
for (int i =0;i<n;i++){
    if (arr[i] >largest){
        largest = arr[i];
    }
}
cout << largest<< endl ;
*/
// second largest element in an array
int largest =0, second_largest=-1;
for (int i=0;i<n;i++){
    if (arr[i]>largest){
        largest=arr[i];
    }
    if(arr[i]>second_largest&& arr[i]!=largest){
        second_largest=arr[i];
    }
}
 cout<< second_largest<<endl;
return 0;
}