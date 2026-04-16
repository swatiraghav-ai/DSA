#include<iostream>
#include<vector>
using namespace std;
vector<int> generateRow(int row){
    long long ans =1;
vector<int> ansRow;
ansRow.push_back(1);
for(int col=1;col<row;col++){
    ans=ans*(row-col);
    ans=ans/(col);
    ansRow.push_back(ans);
}
return ansRow;
}
int main (){
    int N;
    cout << "enter row number";
    cin >> N;
    vector<vector<int>> ans;
    for(int i=1;i<=N;i++){
        ans.push_back(generateRow(i)) ;
    }
    for (auto row : ans){
        for(auto val :row){
            cout << val << " ";
        }
        cout << endl ;
    }
    return 0 ;


}

