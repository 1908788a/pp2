#include <iostream>
using namespace std;

// Function declaration
void print_scaled(int array[3][3], int scale);

int main() {
    // Test data
    int array[3][3] = {
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8}
    };
    int scale = 3;

    // Testing print_scaled function
    print_scaled(array, scale);

    return 0;
}
