/*#include <iostream>
using namespace std;

bool searchMatrix(int matrix[][100], int row, int col, int target) {
    int start = 0;
    int end = row * col - 1;

    while (start <= end) {
        int mid = (start + end) / 2;

        int r = mid / col;
        int c = mid % col;

        if (matrix[r][c] == target)
            return true;
        else if (matrix[r][c] < target)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return false;
}

int main() {
    int matrix[100][100] = {
        {1, 3, 5},
        {7, 9, 11},
        {13, 15, 17}
    };

    int target = 9;

    if (searchMatrix(matrix, 3, 3, target))
        cout << "Element found";
    else
        cout << "Element not found";

    return 0;
}
*/
#include <iostream>
using namespace std;

bool searchMatrix(int mat[][100], int n, int m, int target) {
    int i = 0;
    int j = m - 1;  // start from top-right

    while (i < n && j >= 0) {
        if (mat[i][j] == target) {
            cout << "Element found at (" << i << ", " << j << ")";
            return true;
        }
        else if (mat[i][j] > target) {
            j--;  // move left
        }
        else {
            i++;  // move down
        }
    }

    cout << "Element not found";
    return false;
}

int main() {
    int mat[100][100] = {
        {1, 4, 7, 11},
        {2, 5, 8, 12},
        {3, 6, 9, 16},
        {10,13,14,17}
    };

    int n = 4, m = 4;
    int target = 9;

    searchMatrix(mat, n, m, target);

    return 0;
}