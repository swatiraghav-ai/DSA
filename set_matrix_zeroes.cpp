#include <iostream>
#include<unordered_set>
#include<algorithm>
#include<climits>
using namespace std;
int main (){
    int n;
    cout << "enter array size: ";
    cin >> n;
    int arr[n];
    cout << "enter array element ";
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    return 0;
    
}