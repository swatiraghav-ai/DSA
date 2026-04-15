#include <iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main (){
    int n;
    cout << "enter array size: ";
    cin >> n;
     vector<vector<int>> matrix(n, vector<int>(n));
    cout << "enter array element ";
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> matrix[i][j];
    }
    }
    vector<int>sprial;
int top=0,bottom=n-1,left=0,right=n-1;
while(top<=bottom &&  left<=right){
for(int i=left;i<=right;i++){
    sprial.push_back(matrix[top][i]);
}
top++;
for(int i=top;i<=bottom;i++){
    sprial.push_back(matrix[i][right]);
}
right--;
if(top<=bottom){
for(int i=right;i>=left;i--){
    sprial.push_back(matrix[bottom][i]);
}
}
bottom--;
if(left<=right){
for(int i=bottom;i>=top;i--){
    sprial.push_back(matrix[i][left]);
}
left++;
}

}
    for(int i=0;i<sprial.size();i++){
   cout<<sprial[i]<<" ";
}

    return 0 ;
}