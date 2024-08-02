#include <iostream>
using namespace std;

// Function declarations
bool is_palindrome(int integers[], int length);
int sum_array_elements(int integers[], int length);
int sum_if_palindrome(int integers[], int length);

int main() {
    // Test data
    int array1[] = {1, 2, 3, 2, 1};
    int length1 = 5;
    int array2[] = {1, 2, 3, 4, 5};
    int length2 = 5;

    // Testing sum_if_palindrome function
    cout << "Sum if palindrome (array1): " << sum_if_palindrome(array1, length1) << endl;
    cout << "Sum if not palindrome (array2): " << sum_if_palindrome(array2, length2) << endl;

    return 0;
}
