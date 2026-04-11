//add two matrix
#include <iostream>
using namespace std;

int main() {
    int rows, cols; 

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int A[100][100], B[100][100], sum[100][100];

    // Input first matrix
    cout << "\nEnter elements of first matrix:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> A[i][j];
        }
    }

    // Input second matrix
    cout << "\nEnter elements of second matrix:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> B[i][j];
        }
    }

    // Add matrices
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    // Display result
    cout << "\nSum of matrices:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
