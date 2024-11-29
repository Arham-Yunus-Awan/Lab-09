#include <iostream>
using namespace std;
int main() {
    int arr[4][4] = {
        {1, 3, 5, 7},
        {2, 4, 6, 8},
         {3, 6, 9, 12},
         {4, 8, 12, 16}
         };
    for (int row = 0; row < 4; row++) {
        for (int col = 0; col < 4; col++) {
            cout << arr[row][col] << "\t";
        }
        cout << endl;
    }

    return 0;
}