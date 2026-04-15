#include <iostream>
using namespace std;
int nCr(int n , int r){
    long long res=1;
    for(int i=0;i<r;i++){
        res=res*(n-i);
        res=res/(i+1);
    }
    return res;
}
int main() {
    int r, c;
    cout << "Enter row and column: ";
    cin >> r >> c;

   int res= nCr(r-1,c-1);

    cout << "Element is: " << res;

    return 0;
}