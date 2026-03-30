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
int largest =0;
for (int i =0;i<n;i++){
    if (arr[i] >largest){
        largest = arr[i];
    }
}
cout << largest<< endl ;
return 0;
}