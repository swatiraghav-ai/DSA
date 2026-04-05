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
    for (int i=0;i<n;i++){  //The first loop (Boyer-Moore algorithm) identifies a candidate for the majority element (appearing > n/2 times)
                            //, but doesn't guarantee it exists or meets the threshold.


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
    int count1=0;         //The second loop verifies by counting the candidate's occurrences.
                           // If it exceeds n/2, it's confirmed as majority; 
                           //otherwise, no majority element exists (code silently ends without output).
                           // This verification is essential because Boyer-Moore can produce false positives when no majority element is present
    for(int i=0;i<n;i++){
        if(arr[i]==element){
            count1++;
        }
        if(count1 >n/2){
            cout << element<< endl;
            break;
        }
    }
    return 0;
}