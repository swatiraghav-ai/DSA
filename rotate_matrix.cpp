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
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        swap(matrix[i][j],matrix[j][i]);
    }
}
for(int i=0;i<n;i++){
    reverse(matrix[i].begin(),matrix[i].end());
}

for(int i=0;i<n;i++){
    for(int j =0;j<n;j++){
        cout << matrix[i][j] << " ";
    }
    cout << endl;
}
    return 0;
    
}