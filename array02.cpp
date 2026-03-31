#include<iostream>
using namespace std;
int main (){
    int n ;
    cout << "enter earray element ";
    cin >>n;
    int arr[n];
    cout <<" enter array element ";
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }
    /*// left rotate the array by 1 place 
    int temp =arr[0];
    for (int i =1;i<n;i++){
        arr[i-1]=arr[i];
    }
arr[n-1]=temp;
//cout <<arr[n-1]<<endl;
for (int i=0;i<n;i++){
    cout<< arr[i]<<endl;
}
    */
   int d ;
   cout <<"enetr d";
   cin >> d;
d=d%n;
int temp [d];
for(int i=0;i<d;i++){
    temp[i]=arr[i];
}
for (int i=d;i<n;i++){
    arr[i-d]=arr[i];
}
for(int i=n-d;i<n;i++){
    arr[i]=temp[i-(n-d)];
}
for (int i=0;i<n;i++){
    cout<< arr[i] << endl;
}
   
return 0;
}