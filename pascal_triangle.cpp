#include <iostream>
using namespace std;
// element at rth row and column c in pascal triangle 
int nCr(int n , int r){
    long long res=1;
    for(int i=0;i<r;i++){
        res=res*(n-i);
        res=res/(i+1);
    }
    return res;
}
int main() {
   // int r, c;
   // cout << "Enter row and column: ";
   // cin >> r >> c;

   //int res= nCr(r-1,c-1);

   // cout << "Element is: " << res;









   //print the Nth row of pascal triangle
   int n;
   cout <<"enter roe number :";
   cin >> n;
   int ans =1;
   cout << ans<< " ";
   for (int i=1;i<n;i++){
    ans=ans* (n-i);
    ans=ans/i;
    cout << ans<< " ";
}
   
    return 0;
}