#include <iostream>

void algorithm(long long n) {
    std::cout << n << " ";
    
    if (n == 1) {
        return;
    }
    
    if (n % 2 == 0) {
        algorithm(n / 2);
    } else {
        algorithm(n * 3 + 1);
    }
}

int main() {
    long long n;
    std::cin >> n;
    
    algorithm(n);
    
    return 0;
}
