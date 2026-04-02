#include <iostream>
using namespace std;
int main (){
int n ;
cout << "enter array size";
cin >> n;
int arr[n];
cout<< "enter array element ";
for (int i=0;i<n;i++){
    cin >> arr[i];
}
// missing number in the array
int m ;
cout<< "enter m ";
cin >> m ;
int asspectedsum=0; 
for (int i=1;i<=m;i++){
    asspectedsum = i*(i+1)/2;
}
int arraysum =0;
for (int i=0;i<n;i++){
    arraysum +=arr[i];

}
cout << "missing number " << asspectedsum - arraysum;
return 0;
}