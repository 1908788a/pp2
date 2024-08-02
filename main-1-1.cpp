#include <iostream>
using namespace std;

// Function declaration
int sum_diagonal(int array[4][4]);

int main() {
    // Test data
    int array[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    // Testing sum_diagonal function
    cout << "Sum of main diagonal: " << sum_diagonal(array) << endl;

    return 0;
}
