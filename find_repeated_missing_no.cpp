#include <iostream>
#include <vector>
using namespace std;

pair<int, int> findMissingAndRepeating(vector<int>& arr, int n) {
    long long S = (long long)n * (n + 1) / 2;
    long long S2 = (long long)n * (n + 1) * (2 * n + 1) / 6;

    long long sum = 0, sumSq = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        sumSq += (long long)arr[i] * arr[i];
    }

    long long diff = sum - S;              // y - x
    long long diffSq = sumSq - S2;         // y^2 - x^2

    long long sumXY = diffSq / diff;       // y + x

    int y = (diff + sumXY) / 2;            // repeating
    int x = y - diff;                      // missing

    return {x, y};
}

int main() {
    vector<int> arr = {4, 3, 6, 2, 1, 1};
    int n = arr.size();

    pair<int, int> result = findMissingAndRepeating(arr, n);

    cout << "Missing number: " << result.first << endl;
    cout << "Repeating number: " << result.second << endl;

    return 0;
}