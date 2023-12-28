#include <iostream>
#include <string>
using namespace std;

int find_largest_digit(int n) {
    // Convert integer n to a string to work with its digits
    string n_str = to_string(n);
    int largest_digit = n_str[0] - '0';
    for (char digit : n_str) {
        int current_digit = digit - '0';
        if (current_digit > largest_digit) {
            largest_digit = current_digit;
        }
    }
    return largest_digit;
}

int min_steps_to_zero(int n) {
    int steps = 0;
    while (n > 0) {
        int largest_digit = find_largest_digit(n);
        n -= largest_digit;
        steps++;
    }
    return steps;
}

int main() {
    // Input
    int n;
    cin >> n;

    // Output
    cout << min_steps_to_zero(n) << endl;

    return 0;
}
