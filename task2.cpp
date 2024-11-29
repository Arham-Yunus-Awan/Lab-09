#include <iostream>
using namespace std;
int main() {
    int arr[3][4];

    for (int row = 0; row < 3; row++) {
        for (int column = 0; column < 4; column++) {
            cout << "Enter the value of item: ";
            cin >> arr[row][column];
        }
    }

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++) {
            cout << arr[row][col] << "\t";
        }
        cout << endl;
    }
    

    return 0;
}