
#include <iostream>
#include <string>
#include <bitset>
using namespace std;

void print_binary_str(string decimal_number) {
    int num = stoi(decimal_number);
    string binary = bitset<32>(num).to_string(); // Convert to binary string
    binary = binary.substr(binary.find('1')); // Remove leading zeros
    cout << binary << endl;
}
