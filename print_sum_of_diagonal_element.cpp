#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;

    int arr[n][n];
    int sum = 0;

    cout << "Enter matrix elements:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    // Sum of main diagonal
    for(int i = 0; i < n; i++) {
        sum += arr[i][i];
    }

    cout << "Sum of main diagonal elements = " << sum;

    return 0;
}