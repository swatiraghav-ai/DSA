#include<iostream>
#include<vector>
using namespace std;
int main (){
 vector<int> arr={1,2,3,4,5}  ;
 int target;
    cout<< "enter target value";
    cin>>target;
    for (int val :arr)
    {
        if(val==target){
            return val;
        }
    }
    
return -1;
}