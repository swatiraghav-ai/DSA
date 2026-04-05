#include <iostream>
#include<algorithm>
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
    int count =0;
    int element;
    for (int i=0;i<n;i++){
        if(count ==0){
            count=1;
            element =arr[i];

        }
        else if(arr[i]==element){
            count++;
        }
        else{
            count--;
        }
    }
    cout << element << endl;
    return 0;
}