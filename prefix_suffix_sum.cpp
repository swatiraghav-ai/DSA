#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n], prefix[n];

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    // Prefix sum calculation
    prefix[0] = arr[0];

    for(int i = 1; i < n; i++)
        prefix[i] = prefix[i-1] + arr[i];

    // Print prefix sum array
    cout << "Prefix Sum Array:\n";
    for(int i = 0; i < n; i++)
        cout << prefix[i] << " ";

    return 0;
}