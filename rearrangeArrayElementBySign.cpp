#include <iostream>
#include<vector>
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
    vector<int>ans(n);
   /* int positiveindex=0,negativeindex=1;
    for (int i=0;i<n;i++){
        if(arr[i]<0){
ans[negativeindex]=arr[i];
negativeindex +=2;
        }
        else{
            ans[positiveindex]=arr[i];
            positiveindex +=2;
        }
    }
    for (int i=0;i<n;i++){
        cout << ans[i] <<" ";
    }
        */

        // 2nd variety of same question 
        // in this the positive number and negative number are not same 
        vector<int>pos,neg;
        for (int i=0;i<n;i++){
            if(arr[i] >0){
pos.push_back(arr[i]);
            }
            else{
                neg.push_back(arr[i]);
            }
        }
        if(pos.size()>neg.size()){
            for (int i=0;i<neg.size();i++){
                arr[2*i]=pos[i];
                arr[2*i+1]=neg[i];
            }
            int index =neg.size()*2;
            for (int i=neg.size();i<pos.size();i++){
arr[index]=pos[i];
index++;
            }
        }
        else {
            for (int i=0;i<pos.size();i++){
                arr[2*i]=pos[i];
                arr[2*i+1]=neg[i];
            }
                 int index =pos.size()*2;
                     for (int i=pos.size();i<neg.size();i++){
                         arr[index]=neg[i];
                      index++;
            } 

        }
        for (int i=0;i<n;i++){
            cout << arr[i]<< " ";
        }
    return 0;
}
