#include <iostream>
#include <vector>
#include <stack>

int main() {
    ;
    long long n;
    std::cin >> n;

    std::vector<long long> arr(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    std::vector<long long> nearestLeft(n, 0);
    std::stack<long long> st;

    for (int i = 0; i < n; ++i) {
        while (!st.empty() && arr[st.top()] >= arr[i]) {
            st.pop();
        }

        nearestLeft[i] = st.empty() ? 0 : st.top() + 1;
        st.push(i);
    }

    for (int i = 0; i < n; ++i) {
        std::cout << nearestLeft[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
