#include <bits/stdc++.h>
using namespace std;

    int main() {
    long long n;
    cin >> n; 

    vector<long long> sticks(n);
    for (long long i = 0; i < n; ++i) {
        cin >> sticks[i];
    }

    unordered_map<long long, long long> length_count;
    for (long long i = 0; i < n; ++i) {
        length_count[sticks[i]]++;
    }

    long long most_common_length = 0;
    long long max_count = 0;
    for (const auto& entry : length_count) {
        if (entry.second > max_count) {
            most_common_length = entry.first;
            max_count = entry.second;
        }
    }

    long long total_cost = 0;
    for (long long i = 0; i < n; ++i) {
        total_cost += abs(sticks[i] - most_common_length);
    }

    cout << total_cost << endl;

    return 0;
}
