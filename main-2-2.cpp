#include <iostream>
using namespace std;

// Function declaration
int binary_to_int(int binary_digits[], int number_of_digits);

int main() {
    // Test data
    int binary_digits[] = {1, 1, 0, 1};
    int number_of_digits = 4;

    // Testing binary_to_int function
    cout << "Integer value: " << binary_to_int(binary_digits, number_of_digits) << endl;

    return 0;
}
