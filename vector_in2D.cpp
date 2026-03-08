//Declaring a 2D Vector
/*#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> arr;

    return 0;
}
    */

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> arr(3, vector<int>(4));

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Matrix is:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}