#include<iostream>
#include<algorithm>
using namespace std;
int main (){
    int n;
    cout << "enter array size";
    cin >> n;
    int arr[n];
for (int i=0;i<n;i++){
    cout<<"enter array elements";
    cin >> arr[i];
}
int cnt1=0 , cnt2=0;
int element1 = -1 , element2=-1;
for(int i=0;i<n;i++){
    if(cnt1==0 && arr[i]!=element2){
        cnt1=1;
        element1=arr[i];
    }
    else if(cnt2==0 && arr[i]!=element1){
        cnt2=1;
        element2=arr[i];
    }
    else if (element1==arr[i]){
        cnt1++;
    }
    else if(element2 ==arr[i]){
        cnt2++;
    }
    else{
        cnt1--;
        cnt2--;
    }
}
 cnt1=0,cnt2=0;
for(int i=0;i<n;i++){
    if(arr[i]==element1){
        cnt1++;
    }
     else if(arr[i]==element2){
        cnt2++;
    }
}
    if(cnt1 >= (n/3) ){
        cout << element1 ;

    }
     if (cnt2 >=(n/3)){
        cout << element2;
    }
return 0;
}