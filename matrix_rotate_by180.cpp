#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a[n][m];

    // Input matrix
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    // Rotate 180 degree
    for(int i = n-1; i >= 0; i--) {
        for(int j = m-1; j >= 0; j--) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}