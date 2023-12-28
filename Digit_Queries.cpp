#include <iostream>
#include <string>

std::string generateString(int length) {
    std::string str;
    int number = 1;

    while (str.length() < length) {
        str += std::to_string(number);
        number++;
    }

    return str;
}

int main() {
    int q;
    std::cin >> q;

    while (q--) {
        long long k;
        std::cin >> k;

        std::string str = generateString(k);
        int digit = str[k - 1] - '0';

        std::cout << digit << "\n";
    }

    return 0;
}
