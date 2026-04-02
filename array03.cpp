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
/*int m ;
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

// ANOTHER APPROACH TO FIND MISSING NUMBER ---this is the most optimal solution 
int xor1=0,xor2=0;
for (int i =0;i<n;i++){
    xor2 ^= arr[i];
     xor1 ^= (i+1);
}
xor1^=(n +1);
cout << "missing number "<< (xor1 ^ xor2) << endl;
*/
// maximum consective ones 
int count =0,maximum=0;
for (int i=0;i<n;i++){
    if(arr[i]==1){
        count ++;
        maximum=max(maximum,count);
    }
    else {
        count =0;
    }
}
cout << maximum << endl; 

return 0;
}