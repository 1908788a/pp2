#include <iostream>
using namespace std;

// Function declaration
void count_digits(int array[4][4]);

int main() {
    // Test data
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 0, 1, 2},
        {3, 4, 5, 6}
    };

    // Testing count_digits function
    count_digits(matrix);

    return 0;
}
