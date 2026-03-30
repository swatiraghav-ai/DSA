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
int largest =arr[0];
for (int i =0;i<n;i++){
    if (arr[i] >largest){
        largest = arr[i];
    }
}
cout << largest<< endl ;

// second largest element in an array
int largest =arr[0], second_largest=-1;
for (int i=0;i<n;i++){
    if (arr[i]>largest){
        largest=arr[i];
    }
    if(arr[i]>second_largest&& arr[i]!=largest){
        second_largest=arr[i];
    }
}
 cout<< second_largest<<endl;
 */
// check if the array is sorted or not 
for(int i =1;i<n;i++){
    if(arr[i]>=arr[i-1]){   
    }
    else {
        cout << "array is not sorted"<<endl;
    }
}
 cout << "array is sorted"<< endl;
return 0;
}