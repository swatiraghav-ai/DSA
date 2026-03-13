#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of matrix: ";
    cin >> n;

    int a[n][n];

    cout << "Enter matrix elements:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    // Step 1: Transpose matrix
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            swap(a[i][j], a[j][i]);
        }
    }

    // Step 2: Reverse each row
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n / 2; j++) {
            swap(a[i][j], a[i][n - j - 1]);
        }
    }

    cout << "Matrix after 90 degree rotation:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}