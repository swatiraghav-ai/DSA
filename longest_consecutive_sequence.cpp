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
    
int longest=1;
    unordered_set<int> st;
    for (int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    for(auto it:st){
        if(st.find(it-1)==st.end()){
            int count=1;
            int x =it;
            while(st.find(x+1)!=st.end()){
                x++;
count++;

            }
            longest=max(longest,count);
        }
    }
    return 0;
}