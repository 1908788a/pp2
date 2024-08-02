#include <iostream>
using namespace std;

// Function declarations
int array_min(int integers[], int length);
int array_max(int integers[], int length);
int sum_min_max(int integers[], int length);

int main() {
    // Test data
    int array[] = {1, 2, 3, 4, 5};
    int length = 5;

    // Testing sum_min_max function
    cout << "Sum of min and max: " << sum_min_max(array, length) << endl;

    return 0;
}
