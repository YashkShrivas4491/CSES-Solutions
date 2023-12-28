#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long n;
    cin >> n;

    long long total_sum = (n * (n + 1)) / 2;

    if (total_sum % 2 == 0) {
        cout << "YES" << endl;

        vector<long long> set1, set2;
        long long target_sum = total_sum / 2;
        long long current_sum = 0;

        for (int i = n; i >= 1; i--) {
            if (current_sum + i <= target_sum) {
                set1.push_back(i);
                current_sum += i;
            } else {
                set2.push_back(i);
            }
        }

        // Output the sets
        cout << set1.size() << endl;
        for (int num : set1) {
            cout << num << " ";
        }
        cout << endl;

        cout << set2.size() << endl;
        for (int num : set2) {
            cout << num << " ";
        }
        cout << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
