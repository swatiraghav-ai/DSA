#include <iostream>
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