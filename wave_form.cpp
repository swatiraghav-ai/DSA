#include <iostream>
using namespace std;

int main() {
    int rows = 3;
    int cols = 20;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {

            if((i == 0 && j % 4 == 1) ||
               (i == 1 && (j % 4 == 0 || j % 4 == 2)) ||
               (i == 2 && j % 4 == 3)) {
                cout << "*";
            }
            else {
                cout << " ";
            }

        }
        cout << endl;
    }

    return 0;
}