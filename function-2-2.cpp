
#include <iostream>
using namespace std;

int binary_to_int(int binary_digits[], int number_of_digits) {
    int result = 0;
    for (int i = 0; i < number_of_digits; i++) {
        result = result * 2 + binary_digits[i];
    }
    return result;
}
